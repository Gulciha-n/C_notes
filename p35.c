#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h >

//stdbool.h dosyasini i�eri aktarmak gerekiyor ��nk� bool ifadeler c dilinde tanimli degil,
// di�er bir ��z�m true de�erini 1 ile de�i�tirmek ya da tamamen (i=0; ; i++) gibi bir yaz�m da sorunu ��z�yor.

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
