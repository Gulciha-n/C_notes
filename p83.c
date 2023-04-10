#include <stdio.h>
#include <stdlib.h>

int main()
{
   int data[7] = {12, 2, 4, 55, 132, 1567, 43};
   int i = 0;
   printf("numbers that you entered : \n");
   printf("with array : \n");
   for(i = 0; i < 7; ++i)
   {
      printf("%d ", data[i]);
   }
   printf("with Pointer : \n");
   for(i = 0; i < 7; ++i)
   {
      printf("%d ", *(data + i));
   }
   printf("\n");
   return 0;
}
