#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h >

//stdbool.h dosyasini içeri aktarmak gerekiyor çünkü bool ifadeler c dilinde tanimli degil,
// diðer bir çözüm true deðerini 1 ile deðiþtirmek ya da tamamen (i=0; ; i++) gibi bir yazým da sorunu çözüyor.

int main() {
	
	int i,a ;
	int sum;
	sum=0;
	
	for (i=0;true;i++){
		printf ("enter a number -press to -1 to exit -  : ");
		scanf ("%d",&a);
		 
		 if (a==-1){
		 	break;
		 }
		 else {
		 	sum=sum+a;
		 }
	}
	printf ("sum: %d",sum);
	return 0;
}
