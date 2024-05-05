#include<string.h>

struct Gsymbol {
    char* name;
	int type;
	int size;
	int binding;
	struct Gsymbol* next;
}Gsymbol;



struct Gsymbol* Lookitup(char * name); 

void Install(char *name, int type, int size); // Creates a symbol table entry. 
void showTable();