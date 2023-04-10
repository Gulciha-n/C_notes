#include <stdio.h>
#define SIZE 10

int
main ()
{

  float a[SIZE];
  int j;

  printf ("%s %s\n", "element", "value");

  for ( j = 0; j < SIZE; j++)
    {
      a[j] =  j+(double )j/10;
      printf ("%d %10.1f\n", j, a[j]);
    }

  return 0;
}

