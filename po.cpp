#include <stdio.h>
#include <stdlib.h>
#include<math.h> 

 
int
main ()
{
  
 
double x;
  
double result1, result2;  // result1= floor value ,  result2= ceiling value
  
printf ("enter a number : ");
scanf ("%lf", &x);
  
result1 = floor (x);
result2 = ceil (x);
  
printf ("the value of floor : %.f\n", result1);
  
printf ("the value of ceiling : %.f", result2);
  
 
 
 
return 0;

}


 

