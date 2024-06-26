#include "e1.h"
struct Gsymbol* head=NULL;
int bindd=4096;
int counter=1,d1=-1,d2=-1;

void arraycheck(char *c,struct tNode* id){
	
	struct Gsymbol* a=Lookitup(c);
	//printf("idcheck%d %d",a->size,id->val);
	if(a==NULL){
		printf("%s ",c);
		yyerror(" undeclared var");
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
        
    }
}
struct tNode* getIdNode(char* aa,struct tNode* cris){	
	
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=4;
	a->varname=(char*)malloc(sizeof(aa));
	strcpy(a->varname,aa);
	if(Lookitup(aa)==NULL){
		printf("====yyerror %s undeclared variable\n",aa);
		exit(1);
	}
	a->Gentry=Lookitup(aa);
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
	
	if(root->nodetype==10)
	printf("babe");
	fflush(stdout);
	printf("roottype is %d ",root->nodetype);
	if(root->nodetype==4){
		//printf("%s ",(root->varname));
		printf("bye%d\n",root->nodetype);
		fflush(stdout);
		return;
	}
	else if(root->nodetype==5){
		//printf("%d ",root->val);
		printf("bye%d\n",root->nodetype);
		fflush(stdout);
		return;
	}
	printree(root->left);


	printree(root->right);
		printf("bye%d\n",root->nodetype);
	return;
}

void initialize(FILE *fp,int *l){
	fprintf(fp,"MOV SP,4122\n");	
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


int codegen(struct tNode* root,FILE * fp,int *l){
	
	
	if(!root)
	return ;
	int c1=-1,c2=-1;
	int p,q,x,y;
	if(root->nodetype==0){   // READ (ID)

	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		int k=root->left->Gentry->binding;
		q=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",q,k);
		if(root->left->Gentry->size>1){
			p=codegen(root->left->left,fp,l);
			fprintf(fp,"ADD R%d,R%d\n",q,p);
			releaseReg(l);
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
	//	printf("end");
	//fflush(stdout);
		return p;
	}
	if(root->nodetype==4){          // ID node
	//printf("haha4");
	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
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
		fprintf(fp,"MOV R%d,[R%d]\n",p,p);
		//printf("end");
		//fflush(stdout);
		return p;
	}
	if(root->nodetype==5){          // NUM node
	//printf("haha5");
	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,root->val);
	// 	printf("end");
	// fflush(stdout);
		return p;
	}
	if(root->nodetype==10){       //STRING NODE
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,\"%s\"\n",p,root->varname);
		return p;
	}
	if(root->nodetype==2){       //CONNECTOR NODE
		//printf("haha2");
	//printf("number%d\n",root->nodetype);
	//fflush(stdout);
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
	//printf("end");
	//fflush(stdout);
	return 0;
}




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
		return NULL;
}
void showTable(){
	struct Gsymbol*temp=head;
		while(temp){
		printf("name=%s\n",temp->name);
		temp=temp->next;
		}
}

