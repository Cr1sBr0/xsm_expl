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
#define MOD 11
//#define AND 12
#define OR 13

struct Gsymbol* head=NULL;
struct Lsymbol* head2=NULL;
int bindd=4096;
int counter=1,d1=-1,d2=-1;
int flabel=1;
int lvar;



struct tNode{
    int val; //value of the expression tree
    struct Typetable* type; //type of variable       int str bool void
    char* varname; //Name of variable for ID names
    int nodetype; //Information of non-leaf nodes. Ex NODE_PLUS
    //0READ 1WRITE 2CONNECTOR 3OP 4ID 5NUM 6IF 7WHILE 8BREAK 9CONTINUE 10STRING 11FUNCTION 12RETURN
    //13 FIELD 14FIELDMEMBER //15ALLOC  //16FREE
    struct argList* arglist; //pointer to the expression list given as arguments to a function call
    struct Gsymbol *Gentry;
    struct tNode *left, *middle, *right; //left and right branches, middle for NODE_IF_ELSE
};
struct argList{
	struct tNode* node;
	struct argList * next;
};
struct Gsymbol{
	char *name; //name of variable or function
	struct Typetable* type; //type of var(int or string)
	int size;
	int binding; //static binding of global variables
	struct Paramstruct* paramlist; //pointer to head of formal paramlist in case of functions
	int flabel; //label for identifying starting address of functions code
	struct Gsymbol* next;
};

struct Lsymbol{
	char *name; //name of variable or function
	struct Typetable* type; //type of var(int or string)
	int binding; //local binding of variables
	struct Lsymbol* next;
};


struct Paramstruct{
	char * name; //stores name of param
	struct Typetable* type;  //type of the variable:(Integer / String)
	struct Paramstruct* next; //next param's pointer
};
void ClearLsymbol();
void genCode(struct tNode* a,int k,FILE * fp,int *l,int aaa);
int doBinding(int k);
void checkArgs(char *name,struct argList* a);
void checkParams(char* name,struct Paramstruct* p);
void arraycheck(char *c,struct tNode* id);
void typecheck(struct Typetable * t1, struct Typetable * t2, char c) ;
struct argList* getArgList1(struct argList* a,struct tNode*b);
struct argList* getArgList2(struct tNode*b);
struct tNode* getAllocNode();
struct tNode* getFreeNode(struct tNode *b);
struct tNode* getFieldNode(char *name,int k);
struct tNode*addMember(struct tNode* node,int k);

struct tNode* getFunNode(char *aa,struct argList* b);
struct tNode* getNumNode(int val);

struct tNode* getOpNode(struct Typetable *type,int  aa,struct tNode *left,struct tNode * right);
struct tNode* getIdNode(char* aa,struct tNode* cris);

struct tNode* getwNode(struct tNode* left);
struct tNode* getRetNode(struct tNode* b);
struct tNode* getrNode(struct tNode* left);
struct tNode* getStringNode(char* aa);
struct tNode *getCNode(struct tNode* left,struct tNode* right);

void printree(struct tNode* root);

void initialize(FILE* fp,int *l);

int getFreeReg(int *l);

void releaseReg(int *l);

void freeAllReg(int *l);

void getBackReg(int *l,int k);

int codegen(struct tNode* root,FILE * fp,int *l);
struct tNode* CreateTree(int k,struct tNode* a,struct tNode* b,struct tNode* c);


struct Gsymbol* Lookitup(char * name); 
struct Lsymbol* Lookitup2(char * name);
struct Paramstruct *addParam(struct Paramstruct *a,struct Paramstruct *b);
struct Paramstruct* createParam(char *name,struct Typetable* type,int size);
void GInstall(char *name,struct Typetable* type, int size, struct Paramstruct *paramlist);
void LInstall(char* name,struct Typetable* type);
void ClearLsymbol();
void showTable();
