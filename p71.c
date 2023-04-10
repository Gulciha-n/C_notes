#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 10;
	int b = 20;
	
	int *nptr =&a;
	int *npt =&b;
	
	printf ("adress of a is: %x\n",nptr);
	printf ("adress of b is :%x",npt);
	return 0;
}
