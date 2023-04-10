#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int name [20];
	
	printf ("enter your name : ");
     scanf("%[^\n]s",name );   //***********important************
    
    printf ("your name is : %s ",name );
    
	
	
		return 0;
}
