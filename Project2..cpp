#include <iostream>


int main(int argc, char** argv) {
	
	int numbers[]={12,12,13,14,14,15,25,56,56,67};
	int counter=0;
	int i;
	
	for (i=1;i<=10;i++){
		
		counter=counter+numbers[i];
	}
	
	printf ("result: %d",counter);
	
	return 0;
}
