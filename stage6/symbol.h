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

struct Gsymbol* head=NULL;
struct Lsymbol* head2=NULL;

struct Gsymbol* Lookitup(char * name); 
struct Lsymbol* Lookitup2(char * name);
struct Paramstruct *addParam(struct Paramstruct *a,struct Paramstruct *b);
struct Paramstruct* createParam(char *name,struct Typetable* type,int size);
void GInstall(char *name,struct Typetable* type, int size, struct Paramstruct *paramlist);
void LInstall(char* name,struct Typetable* type);
void ClearLsymbol();
void showTable();
