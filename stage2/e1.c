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


int evaltree(struct tNode* root,int *l){
	if(!root)
	return 0;
	if(root->nodetype==2){
		evaltree(root->left,l);
		evaltree(root->right,l);
	}
 	else if(root->nodetype==0){
 		//printf("hee");
 		int val=*(root->left->varname)-'a';
 		scanf("%d",&l[val]);
 		
 		//printf("hoo %d\n",l[val]);
 	}
 	else if(root->nodetype==1){
 		int val=evaltree(root->left,l);
 		printf("%d\n",val);
 	}
 	else if(root->nodetype==3){
		if(*(root->varname)=='='){
			//printf("%c ",*(root->varname));
			int val=*(root->left->varname)-'a';
			l[val]=evaltree(root->right,l);
			//printf("3 %d\n",l[val]);
		}
		else if(*(root->varname)=='+'){
		return evaltree(root->left,l)+evaltree(root->right,l);
		}
		else if(*(root->varname)=='-'){
		return evaltree(root->left,l)-evaltree(root->right,l);
		}
		else if(*(root->varname)=='*'){
		return evaltree(root->left,l)*evaltree(root->right,l);
		}
		else if(*(root->varname)=='/'){
		return evaltree(root->left,l)/evaltree(root->right,l);
		}
		
	}
	else if(root->nodetype==5){
		//printf("5 %d\n",root->val);
		return root->val;
	}
	else if(root->nodetype==4){
		//printf("%c ",*(root->varname));
		int val=*(root->varname)-'a';
		//printf("4 %d\n",l[val]);
		return l[val];
	}
}

