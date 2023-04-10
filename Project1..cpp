#include <iostream>


int main() {
	int numbers[]={10,20,30,40,50};
	
	int i;
	int toplam =0;
	
	for (i=0;i<=4;i++){
		
		toplam=toplam+numbers[i];
	
	}	
	printf ("toplam: %d",toplam);
	
	
	return 0;
}
