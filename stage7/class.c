#include "class.h"


struct ClassTable *classHead=NULL;


struct ClassTable *CInstall(char *name,char *parent_class_name){
	struct ClassTable *a=(struct ClassTable *)malloc(sizeof(struct ClassTable));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	if(parent_class_name){
		a->parentPtr=CLookup(parent_class_name);
	}
	else{
	a->parentPtr=NULL;
	}
	struct ClassTable *temp=classHead;
	if(!temp){
		classHead=a;
		return a;
	}
	while(temp->next){
		temp=temp->next;
	}
	temp->next=a;
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
	temp->next=a;
	return;
}
void Class_Minstall(struct ClassTable *cptr,char *name,struct Typetable *type,struct Paramstruct *Paramlist){
	struct Memberfunclist *a=(struct Memberfunclist *)malloc(sizeof(struct Memberfunclist));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	a->type=type;
	a->paramList=Paramlist;
	a->fLabel=flabel;
	flabel++;
	a->next=NULL;
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
        	printf("hi %s\n",b->name);
        	b=b->next;
        }
 
	return;
}










