#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int matris[3][5];
	int a,b;
	int toplam;
	
	for(a=0 ; a<3 ; a++){
	for(b=0 ; b<5 ; b++){
			scanf("%d",&matris[a][b]);
		}
	}
		printf("\n");
		for(a=0 ; a<3 ; a++){
		for(b=0 ; b<5 ; b++){
			printf("%d ",matris[a][b]);
		}
		printf("\n");
	}
	//Bu sefer �nce s�tun sonra satir; ��nk� ayni s�tundakileri toplayacagiz..
	printf("\n");
	for(b=0 ; b<5 ; b++){
	   
	   for(a=0 ; a<3 ; a++){
		toplam+=matris[a][b];	
    	}
	printf("%d ",toplam);
	toplam=0;
   }		
	return 0;
}
