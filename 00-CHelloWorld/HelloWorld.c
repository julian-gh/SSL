#include <stdio.h>
int main() {  
   char holaMundo[] = "Hello World!";

   FILE* f_hw = fopen("output.txt", "w");
	
   fprintf(f_hw, holaMundo);
	
	fclose(f_hw);
	
    return 0;
}