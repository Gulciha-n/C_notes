#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	int n[5] = {32,2764,18,95};
	
	printf ("%s%13\n","element","value");
	
	for ( i=0; i<5;i++){
		
		printf("%7u%13d\n",i,n[i]);
		
	}
	
	
	return 0;
}
