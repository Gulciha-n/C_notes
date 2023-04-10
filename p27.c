#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int vize1,vize2,final;
 float dersort;
 float ortalama;
 
 printf("1.vize notunuzu girin:");
 scanf("%d",&vize1);
 printf("2.vize notunuzu girin:");
 scanf("%d",&vize2);
 printf("final notunuzu girin:");
 scanf("%d",&final);
 printf("universite ortalamanizi girin:");
 scanf("%f",&ortalama);
 
 dersort= (vize1+vize2+final) /3.0; 
 
 if (dersort > 60) {
  
  printf("Dersten gectiniz.");
 }

else if (dersort > 50 && dersort<60) {
 printf("Dersten bute kaldiniz.\n");
}


if (ortalama < 2.5 ) { 
    printf("butu gecsen bile dersi seneye al cunku ortalaman dusuk ");

}

else {
 
 printf("Dersten kaldiniz.");
}

	return 0;
}
