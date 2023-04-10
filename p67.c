#include <stdio.h>
#include <stdlib.h>

	int mult(int x , int y ){
		
		int z;
		z=x*y;
		return z;
	}
	
	int main(){
		
		int  t, a , b;
		t=mult(7,8);
		printf ("multuply : %d",t);
	}
