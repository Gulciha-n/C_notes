#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
	
	int i;
	int sum;
	sum=0;
	
	for (i=0;i<10;i++){
		
		if (i % 2 ==1){ // yani eger sayi tek olursa atla diger durumlarda devam et.
			continue;   //for i�indeki ifade dogru oldugu s�rece continue d�ng�y� basa sarar.
		}
		else {
			sum=sum+i;
		}
	}
	printf ("sum : %d",sum);
		 
	return 0;
}
