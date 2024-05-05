#include "e1.h"
#include <stdlib.h>

int space=0;
int class=0;
void genCode(struct tNode* a,int k,FILE * fp,int *l,int aaa,int sp){
	printf("k is -------%d",k);
	fprintf(fp,"F%d:\n",aaa);
	fprintf(fp,"PUSH BP\n");
	fprintf(fp,"MOV BP,SP\n");
	for(int i=0;i<k;i++)
	fprintf(fp,"PUSH R0\n");
	printf("go codegen %d \n",aaa);
	codegen(a,fp,l);
	printf("fin codegen\n");

}
int doBinding(int k){
	printf("\n--------k is %d\n",k);
	struct Lsymbol*temp=head2;
	int b=-1*(k+4);                   //two places reserved for self val and virtual table ptr//first push val then ptr
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
void checkParams(char* name,struct Paramstruct* q,struct ClassTable *ctype){
	struct Paramstruct *p;
	if(Lookitup(name)==NULL){
		if(class==0){
					
			p=Class_Mlookup(ctype,name)->paramList;
		}
		else{
		printf("yyerror %s undeclared function\n",name);
		exit(1);
		}
	}
	else{
	struct Gsymbol *hah=Lookitup(name);
	p=hah->paramlist;
	}
	while(p!=NULL && q!=NULL){
		//printf("-----------------%s %s\n",p->name,q->name);
		if((p->type!=(q->type))||(strcmp(p->name,q->name)!=0)){
			printf("--%s-- ",name);
			yyerror("mismatch in function def and decl\n");

			exit(1);
		}
		p=p->next;
		q=q->next;
	}
	if(p==NULL && q==NULL)
	return;
	printf("--%s-- ",name);
	yyerror("mismatch in function def and decl");
	exit(1);
}
void checkArgs(char *name,struct argList* a,struct ClassTable *ctype){

	
	struct Paramstruct *p;
	if(Lookitup(name)==NULL){
		fflush(stdout);
		if(ctype){
			p=Class_Mlookup(ctype,name)->paramList;

		}
		else{
		printf("yyerror %s undeclared function\n",name);
		exit(1);
		}
	}
	else{
	struct Gsymbol *hah=Lookitup(name);
	p=hah->paramlist;
	}

	while(p!=NULL && a!=NULL){
		printf("--%s %s\n",p->name,a->node->type->name);fflush(stdout);
		if(p->type!=(a->node->type)){
			printf("--%s %s\n",p->name,a->node->type->name);
			yyerror("mismatch in function arg type");
			exit(1);
		}
		printf("helo1\n");fflush(stdout);
		p=p->next;
				printf("helo2\n");fflush(stdout);
		a=a->next;
				printf("helo3\n");fflush(stdout);
	}

	if(p==NULL && a==NULL)
	return;

	yyerror("mismatch in no of function args");
	exit(1);
}
void arraycheck(char *c,struct tNode* id){
	struct Gsymbol* a=Lookitup(c);
	//printf("idcheck%d %d",a->size,id->val);
	if(a==NULL){
		yyerror("undeclared var");
		exit(1);
	}
	if(id->type!=TLookup("int") ){
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
void typecheck(struct Typetable* t1, struct Typetable* t2, char c) {
	//printf("t1,t2 is %d %d\n",t1,t2);
/*	if(!t1||!t2){
		if(t1!=t2){
			yyerror("Invalid type for assignment operation/function type\n");
                      exit(1);
		}
	}
  */  switch(c) {
        case 'e': if(t1 != t2) {          //asignment opertation
        	printf("t1,t2 is %s %s\n",t1->name,t2->name);
                      yyerror("Invalid type for assignment operation/function type\n");
                      exit(1);
                  }
                  break;
        case 'a': if(t1 !=TLookup("int") || t2!=TLookup("int")) {   //arithmetic operation
                      yyerror("Invalid type for arithmetic operation\n");
                      exit(1);
                  }
                  break;
        case 'r': if(t1 !=t2) { //comparison operation
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
	case 'y': if(t1 != TLookup("int")  && t1!=TLookup("str") ) {   //write bois
					printf("%d %d\n",t1,t2);
                      yyerror("Invalid expression inside write condition\n");
                      exit(1);
                  }
                  break;	
        case 'b': if(t1 != TLookup("bool")  || t2!=TLookup("bool") ) {   //AND
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
	if(!b)
	return NULL;
	struct argList* a=(struct argList*)malloc(sizeof(struct argList));
	a->node=b;
	a->next=NULL;
	return a;
}
struct tNode* getSelfNode(struct FieldList *f){ //fieldLists in right side
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=18;
	a->right=NULL;
	return addMember(a,f);
}
struct tNode* getNulNode(){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=17;
	return a;
}

struct tNode* getAllocNode(struct ClassTable *ctype){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	if(ctype)
	a->val=ctype->classIndex;
	else
	a->val=-1;
	a->nodetype=15;
	return a;
}
struct tNode* getFreeNode(struct tNode *b){  //stored in right side
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=16;
	a->right=b;
	return a;
}

struct tNode* getFieldNode(char *name,struct FieldList *f){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=13;
	a->varname=(char*)malloc(sizeof(name));
	strcpy(a->varname,name);
	return addMember(a,f);
}
struct tNode *addMember(struct tNode* node,struct FieldList *f){
	if(!f)
	return node;
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=14;
	a->val=f->fieldIndex;
	a->right=NULL;
        struct tNode* b=node->right;
        if(f->type){
        
        	node->cType=NULL;
		node->type=f->type;
	}
	else if(f->cType){

		node->cType=f->cType;
		node->type=NULL;
	}
        if(b==NULL){
        	node->right=a;
        	return node;
        }
        while(b->right!=NULL){
        	b=b->right;
        }
        b->right=a;
 
	return node;
}
struct tNode* getRetNode(struct tNode* b){ //stored in left side
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=12;
	a->left=b;
	a->middle=NULL;
	a->right=NULL;
	//printf("-----%s %d\n",a->varname,a->type);
	return a;
}
struct tNode* getFunNode(char *aa,struct argList* b){//TYPE OF FUN?
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=11;
	
	//printf("size is %d",sizeof(aa));
	a->varname=(char*)malloc(sizeof(aa));
	strcpy(a->varname,aa);
	a->arglist=b;
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
	if(a->Gentry->type){
	a->type=a->Gentry->type;
	a->cType=NULL;
	}
	else if(a->Gentry->ctype){
	a->cType=a->Gentry->ctype;
	a->type=NULL;
	}
	a->left=cris;
	a->middle=NULL;
	a->right=NULL;
	
	return a;

}
struct tNode* getStringNode(char* aa){
		
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=10;
	a->type=TLookup("str");
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
	a->type=TLookup("int");
	//printf("--%s--",TLookup("int")->name);
	a->val=val;
	a->left=NULL;
	a->middle=NULL;
	a->right=NULL;
	return a;
}

struct tNode *getOpNode(struct Typetable* type,int aa,struct tNode *left,struct tNode * right){
		
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
struct tNode* getrNode(struct tNode* left){ //stored in left
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
	fprintf(fp,"CALL F1\n");
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
	for(int i=0;i<space;i++)
	printf(" ");
		printf("%d\n",root->nodetype);
	fflush(stdout);
	space++;
	if(root->nodetype==0){   // READ (ID)

	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		if(root->left->nodetype==18){
			printf("hlomacha\n");fflush(stdout);
			int k=-4;
			q=getFreeReg(l);
			x=getFreeReg(l);
			fprintf(fp,"MOV R%d,%d\n",x,k);
			fprintf(fp,"MOV R%d,BP\n",q);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			
			struct tNode* b=root->left->right;
			
			while(b){
				fprintf(fp,"MOV R%d,[R%d]\n",q,q);
				k=b->val;
				fprintf(fp,"MOV R%d,%d\n",x,k);
				fprintf(fp,"ADD R%d,R%d\n",q,x);
				b=b->right;
			}
			releaseReg(l);
		}
		else if(Lookitup2(root->left->varname)!=NULL){
			struct Lsymbol *hah=Lookitup2(root->left->varname);
			int k=hah->binding;
			q=getFreeReg(l);
			fprintf(fp,"MOV R%d,BP\n",q);
			p=getFreeReg(l);
			fprintf(fp,"MOV R%d,%d\n",p,k);
			fprintf(fp,"ADD R%d,R%d\n",q,p);
			
			struct tNode* b=root->left->right;
			while(b){
				fprintf(fp,"MOV R%d,[R%d]\n",q,q);
				k=b->val;
				fprintf(fp,"MOV R%d,%d\n",p,k);
				fprintf(fp,"ADD R%d,R%d\n",q,p);
				b=b->right;
			}
			releaseReg(l);
		}
		else{
		printf("-%s-\n",root->left->varname);
		int cris=Lookitup(root->left->varname)->size;
		
		if(cris>1){
		
			q=getFreeReg(l);
			x=codegen(root->left->left,fp,l);
			int k=Lookitup(root->left->varname)->binding;
			fprintf(fp,"MOV R%d,%d\n",q,k);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			releaseReg(l);
		}
		else{
		
		int k=Lookitup(root->left->varname)->binding;
		q=getFreeReg(l);
		x=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",q,k);
		struct tNode* b=root->left->right;
		while(b){
			int k=b->val;
			fprintf(fp,"MOV R%d,[R%d]\n",q,q);
			fprintf(fp,"MOV R%d,%d\n",x,k);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			b=b->right;
		}
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
		 printf("%d loc\n",root->left->nodetype);
		fflush(stdout);
		if(root->left->nodetype==18){
			printf("hlomacha\n");fflush(stdout);
			int k=-4;
			q=getFreeReg(l);
			x=getFreeReg(l);
			fprintf(fp,"MOV R%d,%d\n",x,k);
			fprintf(fp,"MOV R%d,BP\n",q);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			
			struct tNode* b=root->left->right;
			
			while(b){
				fprintf(fp,"MOV R%d,[R%d]\n",q,q);
				k=b->val;
				fprintf(fp,"MOV R%d,%d\n",x,k);
				fprintf(fp,"ADD R%d,R%d\n",q,x);
				b=b->right;
			}
			releaseReg(l);
		}
		else if(Lookitup2(root->left->varname)!=NULL){
		        printf("found loc\n");
		fflush(stdout);
			struct Lsymbol *hah=Lookitup2(root->left->varname);
			int k;
			k=hah->binding;
			q=getFreeReg(l);
			x=getFreeReg(l);
			fprintf(fp,"MOV R%d,%d\n",x,k);
			fprintf(fp,"MOV R%d,BP\n",q);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			
			struct tNode* b=root->left->right;
			
			while(b){
				fprintf(fp,"MOV R%d,[R%d]\n",q,q);
				k=b->val;
				fprintf(fp,"MOV R%d,%d\n",x,k);
				fprintf(fp,"ADD R%d,R%d\n",q,x);
				b=b->right;
			}
			releaseReg(l);
		
		
		
		}
		else if(Lookitup(root->left->varname)){
		 printf("found loc2\n");
		fflush(stdout);
		printf("-%s-\n",root->left->varname);
		int cris=Lookitup(root->left->varname)->size;
		
		if(cris>1){
		
			q=getFreeReg(l);
			x=codegen(root->left->left,fp,l);
			int k=Lookitup(root->left->varname)->binding;
			fprintf(fp,"MOV R%d,%d\n",q,k);
			fprintf(fp,"ADD R%d,R%d\n",q,x);
			releaseReg(l);
		}
		else{
		
		int k=Lookitup(root->left->varname)->binding;
		q=getFreeReg(l);
		x=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",q,k);
		struct tNode* b=root->left->right;
		while(b){
			int k=b->val;
			fprintf(fp,"MOV R%d,[R%d]\n",q,q);
			fprintf(fp,"MOV R%d,%d\n",x,k);
			fprintf(fp,"ADD R%d,R%d\n",q,x);

			b=b->right;
		}
		releaseReg(l);
		}
		}
		
		
		p=codegen(root->right,fp,l);
		
		//fprintf("belowwwwwwwwwwwww");
		fprintf(fp,"MOV [R%d],R%d\n",q,p);
		if(root->left->cType){                                                                          //doubt herr vptr
			fprintf(fp,"ADD R%d,1\n",q);
			fprintf(fp,"MOV [R%d],R%d\n",q,p+1);
		}
		releaseReg(l);
		releaseReg(l);
		space--;
		for(int i=0;i<space;i++)
		printf(" ");
		printf("%d\n",root->nodetype);
		fflush(stdout);
		
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
			//printf("hiihimod");
		fprintf(fp,"MOD R%d,R%d\n",p,q);
		}
		else if(root->val==LT){
			fprintf(fp,"LT R%d,R%d\n",p,q);
		}
		else if(root->val==GT){
			fprintf(fp,"GT R%d,R%d\n",p,q);
		}
		else if(root->val==GTE){
			fprintf(fp,"GE R%d,R%d\n",p,q);
		}
		else if(root->val==LTE){
			fprintf(fp,"LE R%d,R%d\n",p,q);
		}
		else if(root->val==EQ){
			fprintf(fp,"EQ R%d,R%d\n",p,q);
		}
		else if(root->val==NE){
			fprintf(fp,"NE R%d,R%d\n",p,q);
		}
		else if(root->val==12){ //AND
			fprintf(fp,"MUL R%d,R%d\n",p,q);
		}
		else if(root->val==13){  //OR
			;
		}
		releaseReg(l);
		//return p;
	}
	if(root->nodetype==4){          // ID node
	//printf("haha4");
	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		int k;
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
		k=root->Gentry->binding;
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
		if(root->cType){                                                                   //herr vptr
			fprintf(fp,"MOV R%d,[%d]\n",p+1,k+1);
		}
		
		fprintf(fp,"MOV R%d,[R%d]\n",p,p);
		//printf("end");
		//fflush(stdout);
		if(root->cType){
			
		}
		return p;
	}
	if(root->nodetype==5){          // NUM node
	
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,root->val);
		//return p;
	}
	if(root->nodetype==10){       //STRING NODE
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,\"%s\"\n",p,root->varname);
		//return p;
	}
	if(root->nodetype==2){       //CONNECTOR NODE
		codegen(root->left,fp,l);
		codegen(root->right,fp,l);
	}
	if(root->nodetype==6){             //IF
		int k1,k2;
		//printf("in");
		p=codegen(root->left,fp,l);
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
		space--;
		for(int i=0;i<space;i++)
		printf(" ");
		printf("%d\n",root->nodetype);
		fflush(stdout);
		return;
		//printf("out");
		
	} 
	if(root->nodetype==7){
		//printf("whilebro0");
		
		c1=counter;
		counter++;
		fprintf(fp,"C%d:\n",c1);
		p=codegen(root->left,fp,l);
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
		space--;
		for(int i=0;i<space;i++)
		printf(" ");
		printf("%d\n",root->nodetype);
		fflush(stdout);
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
		if(root->right){  //pushing for class
			p=codegen(root->right,fp,l);
			fprintf(fp,"PUSH R%d\n",p);   //class var
			fprintf(fp,"PUSH R%d\n",p+1);  //vptr
			int position=root->val;
			int a=getFreeReg(l);
			int b=getFreeReg(l);
			fprintf(fp,"MUL R%d,8\n",p+1);
			fprintf(fp,"MOV R%d,4096\n",b);
			fprintf(fp,"ADD R%d,R%d\n",b,p+1);
			fprintf(fp,"ADD R%d,%d\n",b,position);
			fprintf(fp,"MOV R%d,[R%d]\n",b,b);
			releaseReg(l);    // b gets freed
			releaseReg(l);    //p+1 gets freed ie a
			freeAllReg(l);   
			fprintf(fp,"PUSH R0\nCALL R%d\n",b);
			releaseReg(l); //p freed
			
			
		}
		else{
			fprintf(fp,"PUSH R0\n");
			fprintf(fp,"PUSH R0\n");
			freeAllReg(l);
			int flabel=root->val;
			fprintf(fp,"PUSH R0\nCALL F%d\n",flabel);
		}
		
		getBackReg(l,k);
		p=getFreeReg(l);
		fprintf(fp,"POP R%d\n",p);//   returned value in p
		q=getFreeReg(l);
		fprintf(fp,"POP R%d\n",q);  //popping for class
		fprintf(fp,"POP R%d\n",q);  //and vptr
		b=root->arglist;
		while(b!=NULL){          //POPPING ARGS
		fprintf(fp,"POP R%d\n",q);
		b=b->next;
		}
		releaseReg(l);
		for(int i=k-1;i>=0;i--){ //GETTING BACK REGS
			fprintf(fp,"POP R%d\n",i);
		}
		space--;
		for(int i=0;i<space;i++)
		printf(" ");
		printf("%d\n",root->nodetype);
		fflush(stdout);
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
	if(root->nodetype==13){   
		x=getFreeReg(l);
		y=getFreeReg(l);                        //FIELD
		if(Lookitup2(root->varname)==NULL){
			if(Lookitup(root->varname)==NULL){
			yyerror("error");
			exit(0);}
			else{
				printf("higlobal\n");
				int k=Lookitup(root->varname)->binding;
				fprintf(fp,"MOV R%d,%d\n",x,k);
			}
		}
		else{
		fprintf(fp,"MOV R%d,BP\n",x);
		fprintf(fp,"MOV R%d,%d\n",y,Lookitup2(root->varname)->binding);
		fprintf(fp,"ADD R%d,R%d\n",x,y);
		}
		fprintf(fp,"MOV R%d,[R%d]\n",x,x);
		struct tNode* b=root->right;
		while(b){
			int k=b->val;
			fprintf(fp,"MOV R%d,%d\n",y,k);
			fprintf(fp,"ADD R%d,R%d\n",x,y);
			if(root->cType && b->right==NULL){              
			//now R5 contains the address inside which has what we need                                  //herr vptr
			fprintf(fp,"ADD R%d,1\n",x);
			fprintf(fp,"MOV R%d,[R%d]",x+1,x);
			fprintf(fp,"SUB R%d,1\n",x);			
			}
			fprintf(fp,"MOV R%d,[R%d]\n",x,x);
			b=b->right;
		}
		releaseReg(l);
		
		space--;
		for(int i=0;i<space;i++)
		printf(" ");
		printf("%d\n",root->nodetype);
		fflush(stdout);
		return x;
		
	}
	if(root->nodetype==15){           //ALLOC
	
		int k=getFreeReg(l);
		for(int i=0;i<k;i++){          //push registers in use
			fprintf(fp,"PUSH R%d\n",i);
		}
		fprintf(fp,"MOV R0,\"Alloc\"\nPUSH R0\nMOV R0,8\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\n");
		fprintf(fp,"POP R%d\n",k);//heap address
		
		fprintf(fp,"POP R0\nPOP R0\nPOP R0\nPOP R0\n");
		for(int i=k-1;i>=0;i--){      //getting back regs
			fprintf(fp,"POP R%d\n",i);
		}
		fprintf(fp,"MOV R%d,%d\n",k+1,root->val);                                            //herr adding class ptr of virtual table
		space--;
		for(int i=0;i<space;i++)
		printf(" ");
		printf("%d\n",root->nodetype);
		fflush(stdout);
		return k;
	}
	if(root->nodetype==16){          //FREE
		int k=getFreeReg(l);
		p=codegen(root->right,fp,l);
		
		for(int i=0;i<k;i++){          //push registers in use
			fprintf(fp,"PUSH R%d\n",i);
		}
		fprintf(fp,"MOV R0,\"Free\"\nPUSH R0\nMOV R0,R%d\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\n ",p);
		fprintf(fp,"POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");
		for(int i=k-1;i>=0;i--){      //getting back regs
			fprintf(fp,"POP R%d\n",i);
		}
		releaseReg(l);
		
		
	}
	if(root->nodetype==17){       //NULL node
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,-1\n",p);
	}	
	if(root->nodetype==18){ //self NODE
		x=getFreeReg(l);
		y=getFreeReg(l);
		int z=getFreeReg(l);
		fprintf(fp,"MOV R%d,BP\n",x);
		fprintf(fp,"MOV R%d,-4\n",y);
		fprintf(fp,"ADD R%d,R%d\n",x,y);
		fprintf(fp,"ADD R%d,1\n",x);
		fprintf(fp,"MOV R%d,[R%d]\n",z,x); 								//herr val of vptr
		fprintf(fp,"SUB R%d,1\n",x);
		fprintf(fp,"MOV R%d,[R%d]\n",x,x);
		struct tNode* b=root->right;
		while(b){
			int k=b->val;
			fprintf(fp,"MOV R%d,%d\n",y,k);
			fprintf(fp,"ADD R%d,R%d\n",x,y);
			fprintf(fp,"MOV R%d,[R%d]\n",x,x);
			b=b->right;
		}
		fprintf(fp,"MOV R%d,R%d\n",y,z);
		releaseReg(l);
		releaseReg(l);
		return x;
		
	}
		
	//printf("end");
	//fflush(stdout);
	space--;
		for(int i=0;i<space;i++)
		printf(" ");
		printf("%d\n",root->nodetype);
		fflush(stdout);
	return p;
}

void setVirtual(FILE * fp){
	int k=4095;
	struct ClassTable *temp=classHead;
	while(temp){
		fprintf(fp,"MOV R0,%d\n",k);
		struct Memberfunclist *temp2=temp->vFuncPtr;
		while(temp2){
			fprintf(fp,"ADD R0,1\n");
			fprintf(fp,"MOV [R0],F%d\n",temp2->fLabel);

			temp2=temp2->next;
		}
		temp=temp->next;
		k=k+8;
		
	}
			fprintf(fp,"MOV SP,%d\n",k);

}

void heapSet(FILE* fp){
	fprintf(fp,"MOV R0,\"Heapset\"\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\n");
		fprintf(fp,"POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");
		fprintf(fp,"CALL F0\n");
}
