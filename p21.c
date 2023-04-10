#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a = 5 ;
	int b = 7 ;
	int c = 9 ;
	printf ("%d %d %d\n ", ++a , --b , c++);
	printf ("%d %d %d\n",a,b,c); // bir sonraki satirda bu degerlerin artmis ve azalmis degerleri gelir.
	printf ("%d %d %d\n",a++, --b,++c);
	printf ("%d %d %d\n",a,b,c);
	
	printf ("a:%d\nb:%d\nc:%d\n", a ,b ,c );
	
	a +=b*c ;
	printf ("%d",a);
	
	
	
	
	
	
		
	
	return 0;
}
