#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main() {
	
   char string [SIZE];
   int i;
   
   printf ("enter a string : ");
   scanf ("%s",string);
   
   for(i=0;i<SIZE && string[i] != '/0';i++){
   	   printf("%c",string[i]);
   	
   }
   
	return 0;
}
