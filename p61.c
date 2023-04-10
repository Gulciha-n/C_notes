#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int sum;
	
	int  numbers [5];
	int i;
	for (i=0;i<5;i++){
		
		printf ("enter a number : ");
		scanf ("%f",&numbers [i]);
		
	    sum = sum + numbers [i];
	    
	}
	printf ("%d",sum);
	
	
	return 0;
}
