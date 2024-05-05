#include "class.h"


struct ClassTable *classHead=NULL;
int funcPosition=0;
int classIndex=0;
struct ClassTable *CInstall(char *name,char *parent_class_name){
	struct ClassTable *a=(struct ClassTable *)malloc(sizeof(struct ClassTable));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	a->classIndex=classIndex;
	classIndex++;
	if(CLookup(parent_class_name)){
		struct ClassTable *b=CLookup(parent_class_name);
		a->parentPtr=b;
		struct FieldList *d=b->memberField;
		while(d){
			printf("helo %s %s\n",d->type->name,d->name);
			Class_Finstall(a,d->type->name,d->name);
			d=d->next;
		}
		struct Memberfunclist *c=b->vFuncPtr;
		while(c){
			printf("heyy %s %s\n",c->type->name,c->name);fflush(stdout);
			Class_Minstall(a,c->name,c->type,c->paramList);
			c=c->next;
		}
				
	}
	else{
	a->parentPtr=NULL;
	a->memberField=NULL;
	a->vFuncPtr=NULL;
	}
	struct ClassTable *temp=classHead;
	if(!temp){
		classHead=a;
		bindd=bindd+8;
		return a;
	}
	while(temp->next){
		temp=temp->next;
	}
	temp->next=a;
        bindd=bindd+8;
	return a;
}

struct ClassTable *CLookup(char *name){
	struct ClassTable *temp=classHead;
	while(temp){
		if(strcmp(temp->name,name)==0)
		return temp;
		temp=temp->next;	
	}
	return temp;

}
void Class_Finstall(struct ClassTable *cptr,char *typename1,char *name){
	struct FieldList *a=(struct FieldList *)malloc(sizeof(struct FieldList));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	//printf("-----%s\n",typename1);
	
	if(CLookup(typename1)){
		a->cType=CLookup(typename1);
		a->type=NULL;
	}
	else if(TLookup(typename1)){
		a->type=TLookup(typename1);
		a->cType=NULL;
	}
	else{
		yyerror("unknown type ");
		printf("%s\n",typename1);
		exit(0);
	}
	a->next=NULL;
	struct FieldList *temp=cptr->memberField;
	int index=0;
	if(!temp){
		a->fieldIndex=index;
		cptr->memberField=a;
		return;
	}
	while(temp->next){
		index++;
		temp=temp->next;
	}	
	index++;
	a->fieldIndex=index;
	if(a->cType)//extra space for virtual class ptr for function
	index++;
	temp->next=a;
	return;
}
void Class_Minstall(struct ClassTable *cptr,char *name,struct Typetable *type,struct Paramstruct *Paramlist){
	struct Memberfunclist *a=(struct Memberfunclist *)malloc(sizeof(struct Memberfunclist));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	a->type=type;
	a->paramList=Paramlist;
	a->next=NULL;
	struct Memberfunclist *temp2;
	if(cptr->parentPtr){
		if(Class_Mlookup(cptr->parentPtr,name)){
		if(Class_Mlookup(cptr,name)){
		//checkargs and retval
		temp2=Class_Mlookup(cptr,name);
		temp2->fLabel=flabel;
		flabel++;
		return;		
		}
		else{
			temp2=Class_Mlookup(cptr->parentPtr,name);
			a->fLabel=temp2->fLabel;
		}
		}
		else{
			a->fLabel=flabel;
			flabel++;
		}
	}
	else{
		a->fLabel=flabel;
		flabel++;
	}
	a->funcPosition=funcPosition;
	funcPosition++;
	struct Memberfunclist *temp=cptr->vFuncPtr;
	printf("aname=%s\n",a->name);
	if(!temp){
		cptr->vFuncPtr=a;
		return;
	}
	while(temp->next){
		temp=temp->next;
	}
	temp->next=a;
	return;
		
}

struct FieldList *Class_Flookup(struct ClassTable *cptr,char *name){
	struct FieldList *temp=cptr->memberField;
	while(temp){
		if(strcmp(temp->name,name)==0)
		return temp;
		temp=temp->next;
	}
	return temp;
}

struct Memberfunclist *Class_Mlookup(struct ClassTable *cptr,char *name){
	struct Memberfunclist *temp=cptr->vFuncPtr;
	while(temp){
		//printf("hii %s %s\n",cptr->name,temp->name);
		if(strcmp(temp->name,name)==0)
		return temp;
		temp=temp->next;
	}
	return temp;
}


void printClassDetails(struct ClassTable *cptr){
	if(!cptr){
		
		return;
	}
	printf("bef class stuff\n");fflush(stdout);
	printf("class stuff %s\n",cptr->name);fflush(stdout);
	struct FieldList *a=cptr->memberField;
	
	while(a){
		
		printf("%s ",a->name);
		if(a->type)
		printf("%s \n",a->type->name);
		if(a->cType)
		printf("%s \n",a->cType->name);
		a=a->next;
	
		
	}

	struct Memberfunclist *b=cptr->vFuncPtr;	
        while(b){
        	printf("hi %s %d %d\n",b->name,b->fLabel,b->funcPosition);
        	b=b->next;
        }
 
	return;
}


int checkPtr(struct ClassTable * c1,struct ClassTable *c2){
	if(!c1 || !c2){
		return 0;
	}
	if(c1==c2)
	return 1;
	return (checkPtr(c1,c2->parentPtr));
}







