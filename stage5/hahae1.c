#include "e1.h"
#include <stdlib.h>


void genCode(struct tNode* a,int k,FILE * fp,int *l,int aaa){
	printf("k is %d\n");
	fprintf(fp,"F%d:\n",aaa);
	fprintf(fp,"PUSH BP\n");
	fprintf(fp,"MOV BP,SP\n");
	for(int i=0;i<k;i++)
	fprintf(fp,"PUSH R0\n");
	codegen(a,fp,l);


}
int doBinding(int k){
	printf("\n--------k is %d\n",k);
	struct Lsymbol*temp=head2;
	int b=-1*(k+2);
	for(int i=0;i<k;i++){
		temp->binding=b;
		b++;
		temp=temp->next;
	}
	b=1;
	while(temp!=NULL){
		temp->binding=b;
		b++;
		temp=temp->next;
	}
	lvar=b-1;
	return b-1;
}
void ClearLsymbol(){
	head2=NULL;
}
void checkParams(char* name,struct Paramstruct* p){
	if(Lookitup(name)==NULL){
		printf("yyerror %s undeclared function\n",name);
		exit(1);
	}
	struct Gsymbol *hah=Lookitup(name);
	struct Paramstruct *q=hah->paramlist;
	while(p!=NULL && q!=NULL){
		//printf("-----------------%s %s\n",p->name,q->name);
		if((p->type!=(q->type))||(strcmp(p->name,q->name)!=0)){
			yyerror("mismatch in function def and decl");
			exit(1);
		}
		p=p->next;
		q=q->next;
	}
	if(p==NULL && q==NULL)
	return;
	yyerror("mismatch in function def and decl");
	exit(1);
}
void checkArgs(char *name,struct argList* a){
	if(Lookitup(name)==NULL){
		printf("yyerror %s undeclared function\n",name);
		exit(1);
	}
	struct Gsymbol *hah=Lookitup(name);
	struct Paramstruct *p=hah->paramlist;
	while(p!=NULL && a!=NULL){
		//printf("--%s %s\n",p->name,a->node->varname);
		if(p->type!=(a->node->type)){
			printf("--%s %s\n",p->name,a->node->varname);
			yyerror("mismatch in function arg type");
			exit(1);
		}
		p=p->next;
		a=a->next;
	}
	if(p==NULL && a==NULL)
	return;
	yyerror("mismatch in no of function args");
	exit(1);
}
void arraycheck(char *c,struct tNode* id){
	return ;
	struct Gsymbol* a=Lookitup(c);
	//printf("idcheck%d %d",a->size,id->val);
	if(a==NULL){
		yyerror("undeclared var");
		exit(1);
	}
	if(id->type!=1){
		yyerror("incompatible type array index");
		exit(1);
	}
	if(a->size==1){
		yyerror("incompatible types");
		exit(1);
	}
	if(id->nodetype==5){
		if(a->size<=id->val){
			yyerror(" out of bound bois");
			exit(1);
		}
	}
}
void typecheck(int t1, int t2, char c) {
	//printf("t1,t2 is %d %d\n",t1,t2);
    switch(c) {
        case 'e': if(t1 != t2) {          //asignment opertation
                      yyerror("Invalid type for assignment operation\n");
                      exit(1);
                  }
                  break;
        case 'a': if(t1 !=1 || t2!=1) {   //arithmetic operation
                      yyerror("Invalid type for arithmetic operation\n");
                      exit(1);
                  }
                  break;
        case 'r': if(t1 !=1 || t2!=1) { //comparison operation
                      yyerror("Invalid type for comparing (<, >, <=..) operation\n");
                      exit(1);
                  }
                  break;
	case 'i': if(t1 != t2) {   //if,while bois
					printf("%d %d\n",t1,t2);
                      yyerror("Invalid expression inside if/while condition\n");
                      exit(1);
                  }
                  break;		
	case 'y': if(t1 != 1 && t1!=3) {   //if,while bois
					printf("%d %d\n",t1,t2);
                      yyerror("Invalid expression inside write condition\n");
                      exit(1);
                  }
                  break;	
        case 'b': if(t1 != 2 || t2!=2) {   //if,while bois
					printf("%d %d\n",t1,t2);
                      yyerror("Invalid expression inside AND condition\n");
                      exit(1);
                  }
                  break;           		    
        
    }
}
struct argList* getArgList1(struct argList* a,struct tNode*b){
	struct argList* temp=a;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=getArgList2(b);
	return a;
}
struct argList* getArgList2(struct tNode*b){
	struct argList* a=(struct argList*)malloc(sizeof(struct argList));
	a->node=b;
	a->next=NULL;
	return a;
}
struct tNode* getRetNode(struct tNode* b){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=12;
	a->left=b;
	a->middle=NULL;
	a->right=NULL;
	//printf("-----%s %d\n",a->varname,a->type);
	return a;
}
struct tNode* getFunNode(char *aa,struct argList* b){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=11;
	
	//printf("size is %d",sizeof(aa));
	a->varname=(char*)malloc(sizeof(aa));
	strcpy(a->varname,aa);
	a->arglist=b;
	
	if(Lookitup(aa)==NULL){
		printf("yyerror %s undeclared function\n",aa);
		exit(1);
	}
	a->Gentry=Lookitup(aa);
	
	a->type=a->Gentry->type;
	a->left=NULL;
	a->middle=NULL;
	a->right=NULL;
	//printf("-----%s %d\n",a->varname,a->type);
	return a;
}
struct tNode* getIdNode(char* aa,struct tNode* cris){	
	
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=4;
	
	//printf("size is %d",sizeof(aa));
	a->varname=(char*)malloc(sizeof(aa));
	strcpy(a->varname,aa);
	
	if(Lookitup2(aa)==NULL){
		if(Lookitup(aa)==NULL){
		printf("yyerror %s undeclared variable\n",aa);
		exit(1);
		}
		else{
		a->Gentry=Lookitup(aa);
		}
	}
	else
	a->Gentry=Lookitup2(aa);
	
	a->type=a->Gentry->type;
	
	a->left=cris;
	a->middle=NULL;
	a->right=NULL;
	
	return a;

}
struct tNode* getStringNode(char* aa){
		
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=10;
	a->type=3;
	//printf("size is %d",sizeof(aa));
	a->varname=(char*)malloc(sizeof(aa));
	strcpy(a->varname,aa);
	//struct Gsymbol*b=Lookitup(aa);
	//printf("bname is %d\n",b->size);
	a->left=NULL;
	a->middle=NULL;
	a->right=NULL;

	return a;

}
struct tNode* getNumNode(int val){

	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=5;
	a->type=1;
	a->val=val;
	a->left=NULL;
	a->middle=NULL;
	a->right=NULL;
	return a;
}

struct tNode *getOpNode(int type,int aa,struct tNode *left,struct tNode * right){
		
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=3;
	a->type=type;
	//printf("type is%d",type);
	a->val=aa;
	a->left=left;
	a->middle=NULL;
	a->right=right;

	return a;
}
struct tNode* getwNode(struct tNode* left){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=1;
	a->left=left;
	a->middle=NULL;
	a->right=NULL;
	return a;
}
struct tNode* getrNode(struct tNode* left){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=0;
	a->left=left;
	a->middle=NULL;
	a->right=NULL;
	return a;
}
struct tNode *getCNode(struct tNode* left,struct tNode* right ){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=2;
	a->left=left;
	a->middle=NULL;
	a->right=right;
	return a;
}
struct tNode* CreateTree(int k,struct tNode* a,struct tNode* b,struct tNode* c){
	struct tNode *aa=(struct tNode*)malloc(sizeof(struct tNode));
	aa->nodetype=k;
	aa->left=a;
	aa->middle=b;
	aa->right=c;
	return aa;
}
void printree(struct tNode* root){
	if(root==NULL)
	return;
	printf("roottype is %d ",root->nodetype);
	fflush(stdout);
	printree(root->left);


	printree(root->right);

	return;
}

void initialize(FILE *fp,int *l){
	fprintf(fp,"MOV SP,%d\nCALL F0\n",bindd);
	fprintf(fp,"MOV R0,\"Exit\"\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"PUSH R0\n");
	fprintf(fp,"CALL 0\n");	
    for(int i=0;i<20;i++){
    	l[i]=0;
    }
    return ;

}
int getFreeReg(int *l){
	for(int i=0;i<20;i++){
		if(l[i]==0){
		l[i]=1;
		return i;
		}
	}
	return -1;
}
void releaseReg(int *l){
	for(int i=19;i>=0;i--){
	if(l[i]==1){
		l[i]=0;
		return;
	}
	}
	return;
}
void freeAllReg(int *l){
	for(int i=19;i>=0;i--){
	l[i]=0;
	}
	return;
}
void getBackReg(int *l,int k){
	for(int i=0;i<k;i++){
		l[i]=1;
	}
	return;
}
int codegen(struct tNode* root,FILE * fp,int *l){
	
	
	if(!root)
	return ;
	int c1=-1,c2=-1;
	int p,q,x,y;
	if(root->nodetype==0){   // READ (ID)

	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		if(Lookitup2(root->left->varname)!=NULL){
			struct Lsymbol *hah=Lookitup2(root->left->varname);
			int k=hah->binding;
			q=getFreeReg(l);
			fprintf(fp,"MOV R%d,BP\n",q);
			p=getFreeReg(l);
			fprintf(fp,"MOV R%d,%d\n",p,k);
			fprintf(fp,"ADD R%d,R%d\n",q,p);
			releaseReg(l);
		}
		else{
		int k=root->left->Gentry->binding;
		q=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",q,k);
		if(root->left->Gentry->size>1){
			p=codegen(root->left->left,fp,l);
			fprintf(fp,"ADD R%d,R%d\n",q,p);
			releaseReg(l);
		}
		}
		x=getFreeReg(l);
		fprintf(fp,"MOV R%d,\"Read\"\n",x);
		fprintf(fp,"PUSH R%d\n",x);
		fprintf(fp,"MOV R%d,%d\n",x,-1);
		fprintf(fp,"PUSH R%d\n",x);
		fprintf(fp,"MOV R%d,R%d\n",x,q);
		fprintf(fp,"PUSH R%d\n",x);
		fprintf(fp,"PUSH R0\n");
		fprintf(fp,"PUSH R0\n");
		fprintf(fp,"CALL 0\n");
		fprintf(fp,"POP R%d\n",x);
		fprintf(fp,"POP R%d\n",x);
		fprintf(fp,"POP R%d\n",x);
		fprintf(fp,"POP R%d\n",x);
		fprintf(fp,"POP R%d\n",x);
		releaseReg(l);
		releaseReg(l);
	}
	if(root->nodetype==1){			//	WRITE(E)
	//printf("haha1\n");
	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		p=codegen(root->left,fp,l);
		q=getFreeReg(l);
		fprintf(fp,"MOV R%d,\"Write\"\n",q);
		fprintf(fp,"PUSH R%d\n",q);
		fprintf(fp,"MOV R%d,%d\n",q,-2);
		fprintf(fp,"PUSH R%d\n",q);
		fprintf(fp,"MOV R%d,R%d\n",q,p);
		fprintf(fp,"PUSH R%d\n",q);
		fprintf(fp,"PUSH R0\n");
		fprintf(fp,"PUSH R0\n");
		fprintf(fp,"CALL 0\n");
		fprintf(fp,"POP R1\n");
		fprintf(fp,"POP R0\n");
		fprintf(fp,"POP R0\n");
		fprintf(fp,"POP R0\n");
		fprintf(fp,"POP R0\n");
		releaseReg(l);
		releaseReg(l);
		
	}
	if(root->nodetype==3){             //OP NODE
	//printf("haha3");
	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		if(root->val==HI){
		//printf("found eq");
		if(Lookitup2(root->left->varname)!=NULL){
			struct Lsymbol *hah=Lookitup2(root->left->varname);
			int k=hah->binding;
			q=getFreeReg(l);
			x=getFreeReg(l);
			fprintf(fp,"MOV R%d,%d\n",x,k);
			fprintf(fp,"MOV R%d,BP\n",q);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			releaseReg(l);
		
		}
		else{
		if(root->left->Gentry->size>1){
			q=getFreeReg(l);
			x=codegen(root->left->left,fp,l);
			int k=root->left->Gentry->binding;
			fprintf(fp,"MOV R%d,%d\n",q,k);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			releaseReg(l);
		}
		else{
		int k=root->left->Gentry->binding;
		q=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",q,k);
		}
		}
		p=codegen(root->right,fp,l);
		//fprintf("belowwwwwwwwwwwww");
		fprintf(fp,"MOV [R%d],R%d\n",q,p);
		releaseReg(l);
		releaseReg(l);
		return 0;
		}
		p=codegen(root->left,fp,l);
		q=codegen(root->right,fp,l);
		if((root->val)==PLUS){
		fprintf(fp,"ADD R%d,R%d\n",p,q);
		}
		else if((root->val)==MINUS){
		fprintf(fp,"SUB R%d,R%d\n",p,q);
		}
		else if((root->val)==MUL){
		fprintf(fp,"MUL R%d,R%d\n",p,q);
		}
		else if((root->val)==DIV){
		fprintf(fp,"DIV R%d,R%d\n",p,q);
		}
		else if((root->val)==MOD){
			printf("hiihimod");
		fprintf(fp,"MOD R%d,R%d\n",p,q);
		}
		
		releaseReg(l);
		return p;
	}
	if(root->nodetype==4){          // ID node
	//printf("haha4");
	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		if(Lookitup2(root->varname)!=NULL){
			struct Lsymbol *hah=Lookitup2(root->varname);
			int k=hah->binding;
			p=getFreeReg(l);
			q=getFreeReg(l);
			fprintf(fp,"MOV R%d,%d\n",q,k);
			fprintf(fp,"MOV R%d,BP\n",p);
			fprintf(fp,"ADD R%d,R%d\n",p,q);
			releaseReg(l);
		}
		else{
		int k=root->Gentry->binding;
		p=getFreeReg(l);
		if(root->Gentry->size>1){
			q=codegen(root->left,fp,l);
			fprintf(fp,"MOV R%d,%d\n",p,k);
			fprintf(fp,"ADD R%d,R%d\n",p,q);
			releaseReg(l);
		}
		else{
		fprintf(fp,"MOV R%d,%d\n",p,k);
		}
		}
		fprintf(fp,"MOV R%d,[R%d]\n",p,p);
		//printf("end");
		//fflush(stdout);
		return p;
	}
	if(root->nodetype==5){          // NUM node
	
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,root->val);
		return p;
	}
	if(root->nodetype==10){       //STRING NODE
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,\"%s\"\n",p,root->varname);
		return p;
	}
	if(root->nodetype==2){       //CONNECTOR NODE
		codegen(root->left,fp,l);
		codegen(root->right,fp,l);
	}
	if(root->nodetype==6){             //IF
		int k1,k2;
		//printf("in");
		p=codegen(root->left->left,fp,l);
		q=codegen(root->left->right,fp,l);
		int k=root->left->val;
		if(k==LT){
			fprintf(fp,"LT R%d,R%d\n",p,q);
		}
		else if(k==GT){
			fprintf(fp,"GT R%d,R%d\n",p,q);
		}
		else if(k==GTE){
			fprintf(fp,"GE R%d,R%d\n",p,q);
		}
		else if(k==LTE){
			fprintf(fp,"LE R%d,R%d\n",p,q);
		}
		else if(k==EQ){
			fprintf(fp,"EQ R%d,R%d\n",p,q);
		}
		else if(k==NE){
			fprintf(fp,"NE R%d,R%d\n",p,q);
		}
		else if(k==12){
			
		}
		releaseReg(l);
		k1=counter;
		counter++;
		fprintf(fp,"JZ R%d,A%d\n",p,k1);
	
		codegen(root->middle,fp,l);
		k2=counter;
		fprintf(fp,"JMP A%d\n",k2);
		counter++;
		fprintf(fp,"C%d:\n",k1);
		codegen(root->right,fp,l);
		fprintf(fp,"C%d:\n",k2);
		releaseReg(l);
		return;
		//printf("out");
		
	} 
	if(root->nodetype==7){
		//printf("whilebro0");
		
		c1=counter;
		counter++;
		fprintf(fp,"C%d:\n",c1);
		p=codegen(root->left->left,fp,l);
		q=codegen(root->left->right,fp,l);
		int k=root->left->val;
		if(k==LT){
			fprintf(fp,"LT R%d,R%d\n",p,q);
		}
		else if(k==GT){
			fprintf(fp,"GT R%d,R%d\n",p,q);
		}
		else if(k==GTE){
			fprintf(fp,"GE R%d,R%d\n",p,q);
		}
		else if(k==LTE){
			fprintf(fp,"LE R%d,R%d\n",p,q);
		}
		else if(k==EQ){
			fprintf(fp,"EQ R%d,R%d\n",p,q);
		}
		else if(k==NE){
			fprintf(fp,"NE R%d,R%d\n",p,q);
		}
		releaseReg(l);
		c2=counter;
		counter++;
		d1=c1;
		d2=c2;
		fprintf(fp,"JZ R%d,A%d\n",p,c2);
		codegen(root->right,fp,l);
		fprintf(fp,"JMP A%d\n",c1);
		fprintf(fp,"C%d:\n",c2);
		d1=-1;
		d2=-1;
		return;
	}
	if(root->nodetype==8){  //BREAK
		if(d2 != -1)
                fprintf(fp, "JMP A%d\n", d2);
	}
	if(root->nodetype==9){  //CONTINUE
		if(d1 != -1)
                fprintf(fp, "JMP A%d\n", d1);
	} 
	if(root->nodetype==11){              //FUNCTION
		int k=getFreeReg(l);
		for(int i=0;i<k;i++){	     //SAVING REGS
			fprintf(fp,"PUSH R%d\n",i);
		}
		releaseReg(l);
		struct argList* b=root->arglist;
		while(b!=NULL){           //PUSHING ARGS
		p=codegen(b->node,fp,l);
		fprintf(fp,"PUSH R%d\n",p);
		b=b->next;
		}
		freeAllReg(l);
		struct Gsymbol *c=Lookitup(root->varname);
		int flabel=c->flabel;
		fprintf(fp,"PUSH R0\nCALL F%d\n",flabel);
		getBackReg(l,k);
		p=getFreeReg(l);
		fprintf(fp,"POP R%d\n",p);//   returned value in p
		q=getFreeReg(l);
		b=root->arglist;
		while(b!=NULL){          //POPPING ARGS
		fprintf(fp,"POP R%d\n",q);
		b=b->next;
		}
		releaseReg(l);
		for(int i=k-1;i>=0;i--){ //GETTING BACK REGS
			fprintf(fp,"POP R%d\n",i);
		}
		return p;
	}	
	if(root->nodetype==12){           //RETURN

		p=codegen(root->left,fp,l);
			x=getFreeReg(l);
			y=getFreeReg(l);
			fprintf(fp,"MOV R%d,-2\n",y);
			fprintf(fp,"MOV R%d,BP\n",x);
			fprintf(fp,"ADD R%d,R%d\n",x,y);
			releaseReg(l);
			fprintf(fp,"MOV [R%d],R%d\n",x,p);
			releaseReg(l);

		for(int i=0;i<lvar;i++){
			fprintf(fp,"POP R%d\n",p);
		}
		releaseReg(l);
		fprintf(fp, "POP BP\n");
            	fprintf(fp, "RET\n");
	}	
	//printf("end");
	//fflush(stdout);
	return 0;
}





void GInstall(char *name,int type, int size, struct Paramstruct *paramlist){
	struct Gsymbol* a=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
		a->name=(char*)malloc(sizeof(name));
		strcpy(a->name,name);
		a->type=type;
		a->size=size;
		if(paramlist==NULL){
		a->binding=bindd;
		bindd=bindd+size;
		}
		a->paramlist=paramlist;
		a->next=NULL;
		if(paramlist!=NULL){
			a->flabel=flabel;
			flabel++;
		}
		if(head==NULL){
			head=a;
			return;
		}
		else{
			struct Gsymbol*temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=a;
			return;	
		}
}
void LInstall(char* name,int type){

		struct Lsymbol* a=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
		a->name=(char*)malloc(sizeof(name));
		strcpy(a->name,name);
		printf("-%s %d-\n",name,type);
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
		if(strcmp(temp->name,name)==0)
		return temp;
		temp=temp->next;
		}
		return NULL;
}
void showTable(){
	struct Gsymbol*temp=head;
		while(temp){
		printf("name=%s\n",temp->name);
		temp=temp->next;
		}
	printf("gdone\n");	

	struct Lsymbol* temp2=head2;
		while(temp2){
		printf("name=%s binding=%d\n",temp2->name,temp2->binding);
		temp2=temp2->next;
		}	
}
struct Paramstruct* createParam(char *name,int type,int size){
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
