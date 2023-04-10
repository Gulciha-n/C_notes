#include <stdio.h>
#include <stdlib.h>
#define SIZE 20


int main() {
	
	int array[SIZE];
	int i;
	
	printf ("%s %8s\n","element","value");
	
	for(i=0;i<SIZE;i++){
		
		array[i]=2+2*i;	
		printf ("%d %10d\n",i,array[i]);
	}
	
		
	return 0;
}
