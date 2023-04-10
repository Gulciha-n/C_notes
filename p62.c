#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
  int number ;
  
  printf ("enter a number :");
  scanf ("%d",&number);
  
  if (number>0){
  	
  	printf ("the number that you entered is possitive");
  }
  else if (number<0){
  	
  	printf ("the number that you entered is neggative");
  }
  else {
  	printf ("this number is neither positive or negative ");
  }
	return 0;
}

