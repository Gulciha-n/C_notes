#include <stdio.h>
#include <stdlib.h>

  int sum (x,y){
  	
  	int z ;
  	z=x+y;
  	return z ;
  }
int main (){
	int a , b ,t;
	printf ("enter the first number : ");
	scanf ("%d",&a);
	printf ("enter the second number : ");
	scanf ("%d",&b);
	
	t=sum(a,b);
	printf ("sum : %d",t);	
}

