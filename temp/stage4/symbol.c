#include "symbol.h"
struct Gsymbol* head=NULL;
int bindd=4096;


void Install(char *name, int type, int size){
	if(head==NULL){
		struct Gsymbol* a=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
		a->name=(char*)malloc(sizeof(name));
		strcpy(a->name,name);
		a->type=type;
		a->size=size;
		a->binding=bindd;
		bindd=bindd+size;
		a->next=NULL;
		head= a;
	}
	else{
		struct Gsymbol*temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		struct Gsymbol* a=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
		a->name=(char*)malloc(sizeof(name));
		strcpy(a->name,name);
		a->type=type;
		a->size=size;
		a->binding=bindd;
		bindd=bindd+size;
		a->next=NULL;
		temp->next=a;
	}
}


struct Gsymbol* Lookitup(char * name) {
		struct Gsymbol*temp=head;
		while(temp){
		if(strcmp(temp->name,name)==0)
		return temp;
		temp=temp->next;
		}
		return temp;
}
void showTable(){
	struct Gsymbol*temp=head;
		while(temp){
		printf("name=%s\n",temp->name);
		temp=temp->next;
		}
}
