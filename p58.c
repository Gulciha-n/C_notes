#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 


int main(int argc, char *argv[]) {
	
	int s[SIZE];
	int j;
	for ( j=0;j<SIZE ; ++j){
		
		s[j]= 2+2 *j;
		
	}
	printf ("%s%13s\n","element","value");
	
	for( j=0;j<SIZE ;j++){
		printf ("%7u%13d\n",j,s[j]);
	}
	
	
	return 0;
}
