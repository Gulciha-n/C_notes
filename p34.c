#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a,b,c,i,n;
	
	printf ("enter a number :");
	scanf ("%d",&n);
	
	a=0;
	b=1;
	printf ("%d\n%d\n",a,b);
	
	for (i=0;i<=n;i++){
		
		c=a+b;
		a=b;
		b=c;
		printf ("%d\n",c);
	}
	
	
	return 0;
}
