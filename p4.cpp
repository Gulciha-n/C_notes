#include <iostream>


int main(int argc, char** argv) {
	
	
	int x,y;
	int z;
	
	prinf ("enter the base : ");
	scanf ("%d",&x);
	
	printf("enter the exp : ");
	scanf("%d",&y);
	
	z= pow(x,y);
	
	printf("the result is : %d",z);
	
	return 0;
}
