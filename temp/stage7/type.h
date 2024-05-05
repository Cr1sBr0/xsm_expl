#include <stdlib.h>
#include<string.h>
#include<stdio.h>

struct Typetable{
	char *name;
	int existyet;       //0 means not yet exist
	int size;
	struct Fieldlist *fields;
	struct Typetable *next;
};


struct FieldList{
	char *name;
	int fieldIndex;
	struct Typetable *type;
	struct ClassTable *cType;
	struct Fieldlist *next;
};


struct Typetable* typeHead=NULL;
struct FieldList* fieldHead=NULL;
int fIndex=0;
struct FieldList * FLookup(struct Typetable *type,char *name);
void TypeTableCreate();//function to initialise typetable entriesm with primitive types (int,str)

struct Typetable * TLookup(char *name);

struct Typetable *TInstall(char *name,int size,struct Fieldlist *fields);





int GetSize(struct Typetable *type);

struct FieldList *addField(char *name,int index,struct Typetable *type);


void printTypes();

