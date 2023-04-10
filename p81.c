#include <stdio.h>
#include <stdlib.h>


int main() {
	                            //* isareti kutunun içindekini & isareti ise kutunun nerde olduğunu gösterir.
	int a =5 ;
	int *ap=&a;              // yani * degeri , & ise adresi gösterir.
//  int *ap=&a seklinde de gosterilebilir	  
	float b = 3.897;
	float *bp=&b;
	char c ='A' ;
	char *cp =&c;
	double d= 3.8976567;
	double *dp=&d;
	
	printf (" adress in memory is : %u its value %d\n",ap,*ap);
	printf (" adress in memory is : %u its value %f\n",bp,*bp);
	printf (" adress in memory is : %u its value %c\n",cp,*cp);
	printf (" adress in memory is : %u its value %d\n",dp,*dp);
	
	 
	return 0;
}
