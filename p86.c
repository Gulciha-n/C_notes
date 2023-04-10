#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main() {
	
    int array[SIZE]={4,6,7,8,9};
    int i,j;
    
    printf ("%s%13s%17s\n","element","value","hologram");
    
    for (i=0;i<SIZE;i++){
    	
    	printf ("%7d %13d\n ",i,array[i]);
    	
    	for (j=1;j<=array[i];j++){
    		
    		printf ("%c ",'*');		
		}
		printf("\n");
		
	}
	return 0;
}
