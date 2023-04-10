#include <stdio.h>

void fonk(int *ip);

int main(void)
{
  int array[10];
  int i;

  for (i=0; i<10; i++) {
       array[i] = i+1;
       printf("%d ", array[i]);
  }

  printf("\n");

  fonk(array);
  for (i=0; i<10; i++) printf("%d ", array[i]);

  return 0;
}

void fonk(int *ip)
{
  int i;

  for (i=0; i<10; i++) *ip++ += 10;
}
