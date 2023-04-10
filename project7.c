#include <stdio.h>
#include <stdlib.h>


int main() 
{
int fib[24];
int i;

fib[0]=1;
fib[1]=1;

for(i=2;i<24;i++){
	
	fib[i]=fib[i-1]+fib[i-2];
}
printf ("%d",fib[i]);
}
