#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float x = 3.50;
	float *nptr = &x;
	
	printf ("%.3f",*nptr);
	return 0;
}
