#include "symbol.h"

int flabel=1;
int bindd=4096;
void GInstall(char *name,struct Typetable* type, int size, struct Paramstruct *paramlist){
		printf("--%s--\n",name);
	struct Gsymbol* a=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
		a->name=(char*)malloc(sizeof(name));
		strcpy(a->name,name);
		a->type=type;
		a->size=size;
		if(size!=0){
		a->binding=bindd;
		bindd=bindd+size;
		}
		a->paramlist=paramlist;
		a->next=NULL;
		if(size==0){
			a->flabel=flabel;
			flabel++;
		}
		if(head==NULL){
			head=a;
			printf("--%s--\n",name);
			return;
		}
		else{
			struct Gsymbol*temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=a;
			printf("--%s--\n",name);
			return;	
		}
}
void LInstall(char* name,struct Typetable* type){

		struct Lsymbol* a=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
		a->name=(char*)malloc(sizeof(name));
		strcpy(a->name,name);
		//printf("-%s %d-\n",name,type);
		a->type=type;
		if(head2==NULL){

			head2=a;
			return;
		}
		else{

			struct Lsymbol*temp=head2;
			
			while(temp->next!=NULL){

				temp=temp->next;
				}
			temp->next=a;
			return;	
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
struct Lsymbol* Lookitup2(char * name) {
	
		struct Lsymbol*temp=head2;
		while(temp){
		if(strcmp(temp->name,name)==0){
		
		return temp;
		}
		temp=temp->next;
		}


		return NULL;
}
void showTable(){
	struct Gsymbol*temp=head;
		while(temp){
		printf("name=%s type=%s\n",temp->name,temp->type->name);
		temp=temp->next;
		}
	printf("gdone\n");	

	struct Lsymbol* temp2=head2;
		while(temp2){
		printf("name=%s binding=%d\n",temp2->name,temp2->binding);
		temp2=temp2->next;
		}	
}
struct Paramstruct* createParam(char *name,struct Typetable* type,int size){
	struct Paramstruct* a=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	a->name=(char*)malloc(sizeof(name));
	strcpy(a->name,name);
	a->type=type;            //type shud be cleared
	a->next=NULL;
	return a;
}
struct Paramstruct *addParam(struct Paramstruct *a,struct Paramstruct *b){
	
	struct Paramstruct * temp=a;
	
	while(temp->next!=NULL){
	
	temp=temp->next;
	
	}
	
	temp->next=b;
	
	return a;
}
