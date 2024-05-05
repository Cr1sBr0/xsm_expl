int counter=1;
struct tNode* getIdNode(char aa){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=4;
	char* c=(char*)malloc(sizeof(char));
	*c=aa;
	a->varname=c;
	a->left=NULL;
	a->middle=NULL;
	a->right=NULL;
	return a;

}
struct tNode* getNumNode(int val){
	struct tNode* a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=5;
	a->val=val;
	a->left=NULL;
	a->middle=NULL;
	a->right=NULL;
	return a;
}

struct tNode *getOpNode(int aa,struct tNode *left,struct tNode * right){
	struct tNode *a=(struct tNode*)malloc(sizeof(struct tNode));
	a->nodetype=3;
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
	if(root->nodetype==4){
		printf("%c\n",*(root->varname));
		return;
	}
	if(root->nodetype==5){
		printf("%d\n",root->val);
		return;
	}
	printf("o%dyo",root->nodetype);
	if(root->nodetype==3)
	printf(" o%dyo",root->val);
	printf("\n");
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
	
	int p,q,c1,c2;
	if(root->nodetype==0){   // READ (ID)
		printf("haha0");
	//printf("number%d\n",root->nodetype);
	fflush(stdout);
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
	printf("haha1\n");
	//printf("number%d\n",root->nodetype);
	fflush(stdout);
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
	printf("haha3");
	//printf("number%d\n",root->nodetype);
	fflush(stdout);
		if(root->val==HI){
		//printf("found eq");
		int c=*(root->left->varname);
		int k=c-'a';
		p=codegen(root->right,fp,l);
		q=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",q,4096+k);
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
		
		releaseReg(l);
		printf("end");
	fflush(stdout);
		return p;
	}
	if(root->nodetype==4){          // ID node
	printf("haha4");
	//printf("number%d\n",root->nodetype);
	fflush(stdout);
		int k=*(root->varname)-'a';
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,4096+k);
		fprintf(fp,"MOV R%d,[R%d]\n",p,p);
		printf("end");
	fflush(stdout);
		return p;
	}
	if(root->nodetype==5){          // NUM node
	printf("haha5");
	//printf("number%d\n",root->nodetype);
	fflush(stdout);
		p=getFreeReg(l);
		fprintf(fp,"MOV R%d,%d\n",p,root->val);
		printf("end");
	fflush(stdout);
		return p;
	}
	if(root->nodetype==2){
		printf("haha2");
	//printf("number%d\n",root->nodetype);
	fflush(stdout);
		codegen(root->left,fp,l);
		codegen(root->right,fp,l);
	}
	if(root->nodetype==6){
		printf("in");
		p=codegen(root->left->left,fp,l);
		q=codegen(root->left->right,fp,l);
		int k=root->left->val;
		if(k==LT){
			fprintf(fp,"LT R%d,R%d\n",p,q);
		}
		else if(k=GT){
			fprintf(fp,"GT R%d,R%d\n",p,q);
		}
		else if(k=GTE){
			fprintf(fp,"GE R%d,R%d\n",p,q);
		}
		else if(k=LTE){
			fprintf(fp,"LE R%d,R%d\n",p,q);
		}
		else if(k=EQ){
			fprintf(fp,"EQ R%d,R%d\n",p,q);
		}
		else if(k=NE){
			fprintf(fp,"NE R%d,R%d\n",p,q);
		}
		releaseReg(l);
		c1=counter;
		counter++;
		fprintf(fp,"JZ R%d,A%d\n",p,c1);
		codegen(root->middle,fp,l);
		c2=counter;
		fprintf(fp,"JMP A%d\n",c2);
		counter++;
		fprintf(fp,"C%d:\n",c1);
		codegen(root->right,fp,l);
		fprintf(fp,"C%d:\n",c2);
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
		else if(k=GT){
			fprintf(fp,"GT R%d,R%d\n",p,q);
		}
		else if(k=GTE){
			fprintf(fp,"GE R%d,R%d\n",p,q);
		}
		else if(k=LTE){
			fprintf(fp,"LE R%d,R%d\n",p,q);
		}
		else if(k=EQ){
			fprintf(fp,"EQ R%d,R%d\n",p,q);
		}
		else if(k=NE){
			fprintf(fp,"NE R%d,R%d\n",p,q);
		}
		releaseReg(l);
		c2=counter;
		counter++;
		fprintf(fp,"JZ R%d,A%d\n",p,c2);
		codegen(root->right,fp,l);
		fprintf(fp,"JMP A%d\n",c1);
		fprintf(fp,"C%d:\n",c2);
		return;
	} 
	printf("end");
	fflush(stdout);
	return 0;
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
		if(root->val==HI){
			//printf("%c ",*(root->varname));
			int val=*(root->left->varname)-'a';
			l[val]=evaltree(root->right,l);
			//printf("3 %d\n",l[val]);
		}
		else if(root->val==PLUS){
		return evaltree(root->left,l)+evaltree(root->right,l);
		}
		else if(root->val==MINUS){
		return evaltree(root->left,l)-evaltree(root->right,l);
		}
		else if(root->val==MUL){
		return evaltree(root->left,l)*evaltree(root->right,l);
		}
		else if(root->val==DIV){
		return evaltree(root->left,l)/evaltree(root->right,l);
		}
		else if(root->val==GT){
			if(evaltree(root->left,l)>evaltree(root->right,l))
			return 1;
			return 0;
		}
		else if(root->val==LT){
			if(evaltree(root->left,l)<evaltree(root->right,l))
			return 1;
			return 0;
		}
		else if(root->val==GTE){
			if(evaltree(root->left,l)>=evaltree(root->right,l))
			return 1;
			return 0;
		}
		else if(root->val==LTE){
			if(evaltree(root->left,l)<=evaltree(root->right,l))
			return 1;
			return 0;
		}
		else if(root->val==EQ){
			if(evaltree(root->left,l)==evaltree(root->right,l))
			return 1;
			return 0;
		}
		else if(root->val==NE){
			if(evaltree(root->left,l)!=evaltree(root->right,l))
			return 1;
			return 0;
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
	else if(root->nodetype==6){
		if(evaltree(root->left,l)){
			evaltree(root->middle,l);
		}
		else{
		evaltree(root->right,l);
		}
	}
	else if(root->nodetype==7){
		while(evaltree(root->left,l)){
			evaltree(root->right,l);
		}
	}
}

