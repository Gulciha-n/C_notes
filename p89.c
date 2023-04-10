#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char n[10];
	int i;
	
	printf ("%s %10s\n","element","value");
	
	for (i=0;i<10;i++){
		n[i]=0;
		printf ("%d %10d\n",i,n[i]);
	} 
	return 0;
}
