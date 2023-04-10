#include <stdio.h>
#include <stdlib.h>


void fonk(int *ip);

int main(void)
{
  int idizi[10];
  int id;

  for (id=0; id<10; id++) {
       idizi[id] = id+1;
       printf("%d ", idizi[id]);
  }

  printf("\n");

  fonk(idizi);
  for (id=0; id<10; id++) printf("%d ", idizi[id]);

  return 0;
}

void fonk(int *ip)
{
  int id;

  for (id=0; id<10; id++) *ip++ += 10;
}
