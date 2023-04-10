#include <stdio.h>
#include <stdlib.h>

int sum(int array[],int size ){
	
	int top=0;
	int i=0;
	
	for (;i<size;i++){
		
		top=top+array[i];
	}
	return top;
	
}
int main() {
	
	int numbers [6]={2,4,5,6,7,8};
	
	printf ("total of these numbers : %d ",sum(numbers,6));
	
	return 0;
}
