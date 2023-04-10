#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char A [20];
	char B [20];
	
	printf ("enter the string :");
	scanf ("%s",A);
	
	printf ("the lenght of string is  : %d\n" ,strlen(A));
	
	printf ("enter the second string :");
	scanf ("%s",B);
	
	printf ("the lenght of second string is : %d ",strlen(B));
	
	
	return 0;
}
