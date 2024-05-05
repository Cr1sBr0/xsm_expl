struct tNode* getIdNode(char aa){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=4;
	char* c=(char*)malloc(sizeof(char));
	*c=aa;
	a->varname=c;
	a->left=NULL;
	a->right=NULL;
	return a;

}
struct tNode* getNumNode(int val){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=5;
	a->val=val;
	a->left=NULL;
	a->right=NULL;
	return a;
}

struct tNode *getOpNode(char aa,struct tNode *left,struct tNode * right){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=3;
	char* c=(char*)malloc(sizeof(char));
	*c=aa;
	a->varname=c;
	a->left=left;
	a->right=right;
	return a;
}
struct tNode* getwNode(struct tNode* left){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=1;
	a->left=left;
	a->right=NULL;
	return a;
}
struct tNode* getrNode(struct tNode* left){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=0;
	a->left=left;
	a->right=NULL;
	return a;
}
struct tNode *getCNode(struct tNode* left,struct tNode* right ){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=2;
	a->left=left;
	a->right=right;
	return a;
}

void printree(struct tNode* root){
	if(root==NULL)
	return;
	if(root->nodetype==4){
		printf("%c",*(root->varname));
		return;
	}
	if(root->nodetype==5){
		printf("%d",root->val);
		return;
	}
	printf("%d\n",root->nodetype);
	printree(root->left);
	printree(root->right);
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
	int p,q;
	if(root->nodetype==0){   // READ (ID)
		char c=*((root->left)->varname);
		int k=c-'a';
		fprintf(fp,"MOV R1,\"Read\"\n");
		fprintf(fp,"PUSH R1\n");
		fprintf(fp,"MOV R1,%d\n",-1);
		fprintf(fp,"PUSH R1\n");
		fprintf(fp,"MOV R1,%d\n",4096+k);
		fprintf(fp,"PUSH R1\n");
		fprintf(fp,"PUSH R0\n");
		fprintf(fp,"PUSH R0\n");
		fprintf(fp,"CALL 0\n");
		fprintf(fp,"POP R1\n");
		fprintf(fp,"POP R0\n");
		fprintf(fp,"POP R0\n");
		fprintf(fp,"POP R0\n");
		fprintf(fp,"POP R0\n");
	}
	if(root->nodetype==1){			//	WRITE(E)
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
		if(*(root->varname)=='='){
		//printf("found eq");
		char c=*(root->left->varname);
		int k=c-'a';
		p=codegen(root->right,fp,l);
		q=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",q,4096+k);
		//fprintf("belowwwwwwwwwwwww");
		fprintf(fp,"MOV [R%d],R%d\n",q,p);
		releaseReg(l);
		releaseReg(l);
		return;
		}
		p=codegen(root->left,fp,l);
		q=codegen(root->right,fp,l);
		if(*(root->varname)=='+'){
		fprintf(fp,"ADD R%d,R%d\n",p,q);
		}
		else if(*(root->varname)=='-'){
		fprintf(fp,"SUB R%d,R%d\n",p,q);
		}
		else if(*(root->varname)=='*'){
		fprintf(fp,"MUL R%d,R%d\n",p,q);
		}
		else if(*(root->varname)=='/'){
		fprintf(fp,"DIV R%d,R%d\n",p,q);
		}
		
		releaseReg(l);
		return p;
	}
	if(root->nodetype==4){          // ID node
		int k=*(root->varname)-'a';
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,4096+k);
		fprintf(fp,"MOV R%d,[R%d]\n",p,p);
		return p;
	}
	if(root->nodetype==5){          // NUM node
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,root->val);
		return p;
	}
	if(root->nodetype==2){
		codegen(root->left,fp,l);
		codegen(root->right,fp,l);
	}
}

