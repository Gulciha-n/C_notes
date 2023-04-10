#include <stdio.h>
#include <stdlib.h>


int main() {
	
    int n;
    int factor ;
    factor =1;
    
    printf ("enter a number that you want to find to factor");
    scanf ("%d",&n);
    
    while (n!=0){
    	
    	factor = factor*n;
    	n--;
	}
	printf ("factor the numbers is : %d",factor);
	
		return 0;
}
