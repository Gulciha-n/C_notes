#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	/* 1 2 3 
	   4 5 6 
	   7 8 9    bu matrisin kodu:
	*/
	
	
	int matris [3][3]={{1,2,3,},{4,5,6,},{7,8,9}};
	
	int i,j;       // i ve j olarak iki for d�ng�s� yapilir biri satir biri sutun i�in.
	
	for (i=0; i<3; i++){
		
		for (j=0;j<3;j++){
			
			printf ("%d  ",matris[i][j]);
		}	
		printf("\n");
	}
	
		return 0;
}