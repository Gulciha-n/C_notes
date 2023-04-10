#include <stdio.h>

int
main ()
{
  int a, b, result, selection;
  float pi;
  a = 3;
  b = 2;
  pi = 3, 14;


  printf ("*********math of menu**********\n");
  printf ("1-area and perimeter of the square\n");
  printf ("2-cube of number\n");
  printf ("3-calculating area and primeter of an circle\n");
  printf ("4-5a-2+7a+9\n");
  printf ("5-area and perimeter of an rectangle\n");
  printf ("*select an operation :");
  scanf ("%d", &selection);

  switch (selection)
    {

    case 1:
      result = a * b;
      result = 2 * (a + b);
      printf ("area and perimeter of the square:%d", result);
      break;

    case 2:
      result = a * a * a;
      printf ("cube of number a :%d\n", result);
      result = b * b * b;
      printf ("cube of number b : %d", result);
      break;

    case 3:
      result = pi * a * a;
      printf ("area of the circle : %d\n", result);
      result = 2 * pi * a;
      printf ("perimeter of the circle : %d", result);
      break;

    case 4:
      result = 5 * a - 2 + 7 * a + 9;
      printf ("5a-2+7a+9 %d\n", result);
      break;

    case 5:
      result = a * b;
      printf ("area of the rectangle: %d\n", result);
      result = 2 * (a * b);
      printf ("perimeter of the rectangle : %d", result);
      break;
    }
  return 0;}

