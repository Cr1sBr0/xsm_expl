struct tNode* getLeafNode(int val){
   struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
   a->k=1;
   a->val=val;
   a->left=NULL;
   a->right=NULL;
   return a;

}

struct tNode *getNode(char c,struct tNode *left,struct tNode * right){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->k=0;
	a->relop=c;
	a->left=left;
	a->right=right;
	return a;
}
void printtree(struct tNode* root){
	if(root->k==0){
	printf("%c",root->relop);
	printtree(root->left);
	printtree(root->right);
	return;
	}
	else{
	printf("%d",root->val);
	return;
	}
}
void initialize(int *l){
	
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
int createcode(struct tNode* root,FILE* fp, int *l){
	int p,q;
	if(root->k==0){
		p=createcode(root->left,fp,l);
		q=createcode(root->right,fp,l);
		if(root->relop=='+'){
		fprintf(fp,"ADD R%d,R%d\n",p,q);
		}
		else if(root->relop=='-'){
		fprintf(fp,"SUB R%d,R%d\n",p,q);
		}
		else if(root->relop=='*'){
		fprintf(fp,"MUL R%d,R%d\n",p,q);
		}
		else if(root->relop=='/'){
		fprintf(fp,"DIV R%d,R%d\n",p,q);
		}
		releaseReg(l);
		return p;
	}
	else{
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,root->val);
		return p;
	}

}
