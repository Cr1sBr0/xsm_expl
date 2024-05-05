#include <stdio.h>

 int main(){
 FILE *bb;  // Declare a FILE pointer
    
    // Open the file for writing
    bb = fopen("b.xsm", "w");

    // Check if the file opened successfully
    if (bb == NULL) {
        perror("Error opening file");
        return 1;  // Exit the program with an error code
    }
    	 fprintf(bb, " %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n ",0,2056,0,0,0,0,0,0); 
    	fprintf(bb, "BRKP\n");
	fprintf(bb, "MOV R0, 3\n");
	fprintf(bb, "MOV R1, 2\n");
	fprintf(bb, "ADD R0, R1\n");
	fclose(bb);
	return 0;
}
