typedef struct tNode{
	int val;
	int type;// 0 for int 1 for string
	char* varname;
	int nodetype;//read0   write1   connector2  =/+|-|*|/3  ID4  NUM5
	struct tNode* left,*right;

};

struct tNode* getIdNode(char aa);

struct tNode* getNumNode(int val);

struct tNode* getOpNode(char aa,struct tNode *left,struct tNode * right);

struct tNode* getwNode(struct tNode* left);

struct tNode* getrNode(struct tNode* left);

struct tNode *getCNode(struct tNode* left,struct tNode* right);

void printree(struct tNode* root);

void initialize(FILE* fp,int *l);

int getFreeReg(int *l);

void releaseReg(int *l);

int evaltree(struct tNode* root,int *l);
