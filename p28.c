#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int v1 , v2 ,f;
	float lessonavr;
	float uniavr;
	
	printf ("enter v1 :");
	scanf ("%d",&v1);
	
	printf ("enter v2 :");
	scanf ("%d",&v2);
	
	printf ("enter f :");
	scanf ("%d",&f);
	
	printf ("enter your univeristy average : ");
	scanf ("%f",&uniavr);
	
	lessonavr = (v1*3/10+v2*3/10+f*4/10);
	
	if (lessonavr>=90){
		printf ("your average is : %f and letter grade is : AA",lessonavr);
	}
	else if (lessonavr<90 && lessonavr>=80){
		printf ("your average is : %f and letter grade is : AB",lessonavr);
	}
	
	else if (lessonavr<80 && lessonavr>=70){
		printf ("your average is : %f and letter grade is : BB",lessonavr);
    }
    else if (lessonavr<70 && lessonavr>=60){
		printf ("your average is : %f and letter grade is : CB",lessonavr);
		
		if (uniavr<2.5){
			printf ("please take this lesson again the next year");
		}
    }
	else if (lessonavr<60 && lessonavr>=50){
		printf ("your average is : %f and letter grade is : CC",lessonavr);
		
		if (uniavr<2.3){
			printf ("you are so lazy you must study hard.");
		}
		
    }
    else {
    	printf ("unfortunately you failed this lesson");
	}
	
	
	return 0;
}
