#include <stdio.h>
#include <stdlib.h>
#define SIZE 20


int main() {
	
	char string1[SIZE];
	char string2[]= "string literal";
	
	printf ("%s","enter  a string (no longer than 19 characters):");
	scanf("%19s",string1);
	
	printf ("string1 is : %s\nstring2 is: %s\n", string1,string2);
	
	return 0;
	
}
