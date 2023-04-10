#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number ;
	int factor=1;
	int i;
	
	printf ("please enter a number that you want to find factor:");
	scanf ("%d",&number);
	
	for (i=1;i<=number;i++){
		
		factor = factor*i;
	}
	printf ("the factor is : %d",factor);
	
	
	return 0;
}
