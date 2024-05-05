#include<string.h>
#include<stdio.h>
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

struct tNode{
    int val; //value of the expression tree
    int type; //type of variable       1arithexp 2relop 3string 4void
    char* varname; //Name of variable for ID names
    int nodetype; //Information of non-leaf nodes. Ex NODE_PLUS
    //0READ 1WRITE 2CONNECTOR 3OP 4ID 5NUM 6IF 7WHILE 8BREAK 9CONTINUE 10STRING
    struct Gsymbol *Gentry;
    struct tNode *left, *middle, *right; //left and right branches, middle for NODE_IF_ELSE
};

struct Gsymbol {
    char* name;        
	int type;
	int size;
	int binding;
	struct Gsymbol* next;
};


void arraycheck(char *c,struct tNode* id);
void typecheck(int t1, int t2, char c) ;

struct tNode* getNumNode(int val);

struct tNode* getOpNode(int value,int  aa,struct tNode *left,struct tNode * right);
struct tNode* getIdNode(char* aa,struct tNode* cris);

struct tNode* getwNode(struct tNode* left);

struct tNode* getrNode(struct tNode* left);

struct tNode *getCNode(struct tNode* left,struct tNode* right);

void printree(struct tNode* root);

void initialize(FILE* fp,int *l);

int getFreeReg(int *l);

void releaseReg(int *l);

struct tNode* CreateTree(int k,struct tNode* a,struct tNode* b,struct tNode* c);
struct tNode* getStringNode(char* aa);

struct Gsymbol* Lookitup(char * name); 

void Install(char *name, int type, int size); // Creates a symbol table entry. 
void showTable();
