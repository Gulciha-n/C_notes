#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayilar[3][5];
    int i;
    int j;
    int k;
    int l = 0;
    int c = 0;
    int toplam = 0;
    int sum = 0;
    for (i = 0; i < 3; i++)
      {

	l++;

	printf ("matrixsinizin %d. satirini giriniz : \n", l);


	for (j = 0; j < 5; j++)
	  {

	    scanf ("%d", &sayilar[i][j]);
	    toplam += sayilar[i][j];
	  }

	printf ("\n");
      }

    printf ("\n");

    printf ("matriksiniz =\n\n");


    for (i = 0; i < 3; i++)
      {

	for (j = 0; j < 5; j++)
	  {

	    printf ("%d ", sayilar[i][j]);
	  }

	printf ("\n");

      }

    printf ("\n");

    printf ("matrixsinizdeki sayilarin toplam %d'dir.\n\n", toplam);



    for (j = 0; j < 5; j++)
      {
	for (i = 0; i < 3; i++)
	  {

	    sum = sum + sayilar[i][j];

	  }
	c++;
	printf (" %d. sutunun toplami %d'dir.\n", c, sum);
	sum = 0;
      }
	return 0;
}
