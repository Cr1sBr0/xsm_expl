struct ClassTable{
	char *name;
	struct Fieldlist *memberField;
	struct Memberfunclist *vFuncPtr;
	struct ClassTable *parentPtr;
	int classIndex;
	int fieldCount;
	int methodCount;
	struct ClassTable *next;
};



struct Memberfunclist{
	char *name;
	struct Typetable *type;
	struct Paramstruct *paramList;
	int funcPosition;
	int fLabel;
	struct Memberfunclist *next;
};


struct ClassTable *CInstall(char *name,char *parent_class_name);
struct ClassTable *CLookup(char *name);
void Class_Finstall(struct ClassTable *cptr,char *typename1,char *name);
void Class_Minstall(struct ClassTable *cptr,char *name,struct Typetable *type,struct Paramstruct *Paramlist);
struct FieldList *Class_Flookup(struct ClassTable *cptr,char *name);
struct Memberfunclist *Class_Mlookup(struct ClassTable *cptr,char *name);
void printClassDetails(struct ClassTable *cptr);
