#include <stdio.h>
#include <stdlib.h>


int main() {
int numbers [5];	
int sum,i ;
sum=0;
i=0;

 for (i=0;i<5;i++){
 	printf ("enter a number : ");
 	scanf("%d",&numbers[i]);
 	
 	sum = sum + numbers[i];
 	
 }
 printf ("sum of numbers : %d",sum);
 
 

	return 0;
}
