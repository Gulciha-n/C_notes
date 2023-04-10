#include <stdio.h>

int main()
{
  int array[10];
  int *ptr, a;

  ptr = array;

  for (a=1; a<10; a++) {
       ptr[a] = a; 
       printf("%d ", ptr[a]);
  }
  
  
  return 0;
}
