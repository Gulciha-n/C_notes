#include <stdio.h>
#include <stdlib.h>

void printerror(int error){
	
	printf("error code is %d",error);
}
int main() {
	
	int a;
	printf ("enter a number : ");
	scanf ("%d",&a);
	
	if (a<0){
		printerror(404);
	}
	else if  (a>0) {
		printf ("the number that you entered is : %d",a);	
	}		
	else {
		printf ("the number is zero not possitive or negative ");	
	}
	}
