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



int counter=1,d1=-1,d2=-1;
int lvar;


struct tNode{
    int val; //value of the expression tree
    struct Typetable* type; //type of variable       int str bool void
    struct ClassTable *cType;
    char* varname; //Name of variable for ID names
    int nodetype; //Information of non-leaf nodes. Ex NODE_PLUS
    //0READ 1WRITE 2CONNECTOR 3OP 4ID 5NUM 6IF 7WHILE 8BREAK 9CONTINUE 10STRING 11FUNCTION 12RETURN
    //13 FIELD 14FIELDMEMBER //15ALLOC  //16FREE  //17null //18self
    struct argList* arglist; //pointer to the expression list given as arguments to a function call
    struct Gsymbol *Gentry;
    struct tNode *left, *middle, *right; //left and right branches, middle for NODE_IF_ELSE
};
struct argList{
	struct tNode* node;
	struct argList * next;
};

void ClearLsymbol();
void genCode(struct tNode* a,int k,FILE * fp,int *l,int aaa,int sp);
int doBinding(int k);
void checkArgs(char *name,struct argList* a,struct ClassTable *ctype);
void checkParams(char* name,struct Paramstruct* p,struct ClassTable *ctype);
void arraycheck(char *c,struct tNode* id);
void typecheck(struct Typetable * t1, struct Typetable * t2, char c) ;
struct argList* getArgList1(struct argList* a,struct tNode*b);
struct argList* getArgList2(struct tNode*b);
struct tNode* getSelfNode(struct FieldList *f);
struct tNode* getNulNode();
struct tNode* getAllocNode();
struct tNode* getFreeNode(struct tNode *b);
struct tNode* getFieldNode(char *name,struct FieldList *f);
struct tNode*addMember(struct tNode* node,struct FieldList *f);

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



