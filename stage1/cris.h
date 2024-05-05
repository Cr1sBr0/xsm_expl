typedef struct tNode{
	int k;  //0 for op  1 for val
	int val;
	char relop;
	struct tNode* left,*right;

};



struct tNode* getLeafNode(int val);


struct tNode *getNode(char c,struct tNode *left,struct tNode * right);


void printtree(struct tNode* root);

int createcode(struct tNode* root,FILE* fp, int *l);

int getFreeReg(int *l);

void releaseReg(int *l);

void initialize(int *l);
