#include <stdio.h>
#include <stdlib.h>


void printmatris(int matris[][4],int size){
	
	int i,j;
	
	for (i=0;i<size;i++){
		
		for (j=0;j<4;j++){
			
			printf ("%d",matris[i][j]);
		}
		printf ("\n");
	}
}

int main() {
	
	int array [3][4];
	int i,j;
	
	printf("fill the matris\n");
	
	for (i=0;i<3;i++){
		
		for (j=0;j<4;j++){
			
			scanf("%d",&array[i][j]);	 
		}
	}
	printmatris(array,3);
	
	return 0;
}







