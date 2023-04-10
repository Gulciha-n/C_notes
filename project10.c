#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int numbers[5]={1,2,3,4,5};
	int i;
	int factor=1;
	
	for (i=0;i<5;i++){
		
		factor=factor*numbers[i];
		
	}
	printf ("The result of 5! : %d ",factor);
	return 0;
}
