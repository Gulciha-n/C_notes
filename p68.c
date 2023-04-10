#include <stdio.h>
#include <stdlib.h>

int findcube (int x  ){
	int z ;
	z= x*x*x;
	return z ;
}
int main (){
	
	int a ;
	printf ("enter a number : ");
	scanf ("%d",&a);
	printf ("cube of the number is : %d",findcube(a));

}
