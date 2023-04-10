#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	int a,b,c ;
    float x1,x2 ;
    float delta ;
    
    printf ("enter values of a , b and c :");
    scanf ("%d %d %d",&a,&b,&c);
    
    delta = b*b-4*a*c;
    x1= (-b+(sqrt(delta)))/2*a;
    x2= (-b-(sqrt(delta)))/2*a;
    
    printf ("x1 : %.2f, x2 : %.2f ",x1,x2);
    	
	
	return 0;
}
