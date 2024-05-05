#define LT 0
#define LTE 1
#define GT 2
#define GTE 3
#define NE 4
#define EQ 5
#define PLUS 6 
#define MINUS 7
#define MUL 8
#define DIV 9
#define HI 10

typedef struct tNode{
	int val;
	int type;// 0 for int 1 for string
	char* varname;
	int nodetype;//read0   write1   connector2  =/+|-|*|/3  ID4  NUM5 IF6 WHILE7 BREAK8 CONT9
	struct tNode* left,*right,*middle;

};

struct tNode* getIdNode(char aa);

struct tNode* getNumNode(int val);

struct tNode* getOpNode(int type,int  aa,struct tNode *left,struct tNode * right);

struct tNode* getwNode(struct tNode* left);

struct tNode* getrNode(struct tNode* left);

struct tNode *getCNode(struct tNode* left,struct tNode* right);

void printree(struct tNode* root);

void initialize(FILE* fp,int *l);

int getFreeReg(int *l);

void releaseReg(int *l);

int evaltree(struct tNode* root,int *l);
struct tNode* CreateTree(int k,struct tNode* a,struct tNode* b,struct tNode* c);
