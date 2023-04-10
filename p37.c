#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	int i=0;
	int sum=0;
	
	while (i<10){
		i++;            // i++ , döngü sonuna konulunca çalismaz çünkü continue dan sonra basa sariyor 
		                //yani continue dan sonraki kisimlar okunmuyor bu yuzden dongu oraya ulasamiyor.
		if(i % 2 == 1){
			continue;
		}
		else {
			sum=sum+i;
		}	
	}
	printf ("sum=%d",sum);
	
	return 0;
}
