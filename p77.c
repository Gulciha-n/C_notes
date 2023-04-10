#include <stdio.h>
#include <stdlib.h>

int factor(int a ){
	
	int factoriel = 1;
	for (;a>0;a--){
		
		factoriel=factoriel*a;
	}
}
int main() {
	
	int t;
	
	printf ("enter the number that you want to finf factoriel : ");
	scanf ("%d",&t);
	
	printf ("factor of the number is : %d",factor(t));
	
	return 0;
}
