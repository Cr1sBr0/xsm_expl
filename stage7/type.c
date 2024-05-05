#include <stdlib.h>
#include "type.h"



void TypeTableCreate(){
	struct Typetable *a,*temp;
	a=(struct Typetable*)malloc(sizeof(struct Typetable));
	a->name=(char*)malloc(sizeof("int"));
	strcpy(a->name,"int");
	a->size=1;
	a->fields=NULL;
	a->next=NULL;
	typeHead=a;
	temp=a;
	
	a=(struct Typetable*)malloc(sizeof(struct Typetable));
	a->name=(char*)malloc(sizeof("str"));
	strcpy(a->name,"str");
	a->size=1;
	a->fields=NULL;
	a->next=NULL;
	temp->next=a;
	temp=temp->next;
	
	a=(struct Typetable*)malloc(sizeof(struct Typetable));
	a->name=(char*)malloc(sizeof("bool"));
	strcpy(a->name,"bool");
	a->size=1;
	a->fields=NULL;
	a->next=NULL;
	temp->next=a;
	temp=temp->next;
	
	a=(struct Typetable*)malloc(sizeof(struct Typetable));
	a->name=(char*)malloc(sizeof("void"));
	strcpy(a->name,"void");
	a->size=1;
	a->fields=NULL;
	a->next=NULL;
	temp->next=a;
	//temp=temp->next;
	return;
}

struct Typetable * TLookup(char *name){
	struct Typetable *a;
	a=typeHead;
	while(a!=NULL){
		if(strcmp(a->name,name)==0)
		return a;
		a=a->next;
	}
	return a;
}

/*struct Typetable *TInstall(char *name,int size,struct Fieldlist *fields){

	struct Typetable *a;
	a=(struct Typetable*)malloc(sizeof(struct Typetable));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	a->size=size;
	a->fields=fields;
	//printf("tname in tinstall is %s\n",a->name);
	struct FieldList *f=fields;
	while(f!=NULL){
		//printf("fname in tinstall is %s\n",f->name);
		if(f->type->existyet==0){
			if(strcmp(f->type->name,name)==0){
				f->type=a;
			}
			else{
				yyerror("invalid type");
				exit(0);
			}
		}
		f=f->next;
	} 
	a->existyet=1;
	a->next=NULL;
	struct Typetable * temp=typeHead;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=a;
	return a;
}*/
struct Typetable * TInstall(char *name){
	struct Typetable *a;
	a=(struct Typetable*)malloc(sizeof(struct Typetable));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	a->next=NULL;
	a->fields=NULL;
	struct Typetable * temp=typeHead;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=a;
	return a;
}

void Type_Minstall(struct Typetable *type1,struct Typetable *type2,char *name){
	struct FieldList *a;
	a=(struct FieldList*)malloc(sizeof(struct FieldList));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	////a->fieldIndex=index;
	a->type=type2;
	a->next=NULL;
	struct FieldList *b=type1->fields;
	type1->size++;
	int k=0;
	if(b==NULL){
		a->fieldIndex=k;
		type1->fields=a;
		return;
	}
	while(b->next){
		k++;
		a->fieldIndex=k;
		b=b->next;
	}
	k++;
	a->fieldIndex=k;
	b->next=a;

	return;
	
}

struct FieldList * FLookup(struct Typetable *type,char *name){
	struct FieldList *a=type->fields;
	while(a!=NULL){
		if(strcmp(a->name,name)==0)
		return a;
		a=a->next;
	}
	return a;
}


int GetSize(struct Typetable *type){     //not yet
	return 0;
}

struct FieldList *addField(char *name,int index,struct Typetable *type){
	struct FieldList *a;
	a=(struct FieldList*)malloc(sizeof(struct FieldList));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	a->fieldIndex=index;
	a->type=type;
	a->next=NULL;
	struct FieldList* temp=fieldHead;
	if(temp==NULL){
		fieldHead=a;
		return a;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=a;
	return fieldHead;
}

void printTypes(){
	struct Typetable *a=typeHead;
	while(a!=NULL){
	printf("name=%s\n",a->name);
	struct FieldList *b=a->fields;
	printf("fieldss\n");
	while(b!=NULL){
		printf("fname=%s type=%s\n",b->name,b->type->name);
		b=b->next;
	}
	a=a->next;
	}
}






