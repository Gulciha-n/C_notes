#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double x;
	double result1 , result2;
	
	printf ("enter a number : ");
	scanf ("%lf",&x);
	
	result1 = sin(x);
	printf("result1 : %lf\n",result1);
	
	result2 = cos(x);
	printf("result2 : %lf ",result2);
	
	return 0;
}
