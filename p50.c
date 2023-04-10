#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

   double x ;
   double result1,result2;
   
    printf ("enter a number : ");
    scanf ("%lf",&x);
   
    result1 = fabs(x);
    printf ("result : %.lf\n",result1);
    
    result2 = log(x);               //log() fonksiyonu, tabani e olan log için kullanilir.
    printf ("result : %lf",result2);
    
   
   
   
   
   	return 0;
}
