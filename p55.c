#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char A[20];
	
	printf ("enter a sentence : ");
	scanf ("%s",A);
	
	printf ("%10s\n",A);  // write 10 with A.
	
	printf ("%10.4s\n",A);  // write A but only 4 letter of A  
	
	printf ("%-10s",A);  // memory=40 , 40-10=30
	
	
	
	
	
	
	
	
	return 0;
}
