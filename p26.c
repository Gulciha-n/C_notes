#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int m1,f1;
	float average ;
	float u ;
	
	printf ("enter m1 : ");
	scanf ("%d",&m1);
	
	printf ("enter f1 : ");
	scanf ("%d",&f1);
	
	printf ("enter university u :");
	scanf ("%f",&u);
	
	average = (m1+f1)/2;
	
	if (average>60){
		printf ("you passed of the exams");
		
	}
    else if ( average<60 && average>50){
		
		printf ("you failed and enter to another exam");
		
		}
		if (u<2.5){
			printf ("you must take this lesson the next year");
			
		}
	else  {
		printf ("you failed this lesson ");
	}
	
	return 0;
}
