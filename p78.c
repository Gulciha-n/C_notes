#include <stdio.h>
#include <stdlib.h>

int multp(int array[],int size){
	
	int counter=1;
	int i=0;
	for (;i<size;i++){
		
		counter *=  array[i];
	}
	return counter;
}

int main() {
	
	int numbers [5]={1,2,2,3,4};
	
	printf ("multiplication of these numbers : %d ",multp(numbers,5));
	
	
	return 0;
}
