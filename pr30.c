#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int operation ;
	int arrears=1000;
	int amount ;
	
	printf ("operations \n1:withdraw\n2:investment\n3:transfer\n4:check up on\n5:go back\n\n");
	
	printf ("select an operations : ");
	scanf ("%d",&operation);
	
	switch (operation){
		
		case 1 : 
		   printf ("your total arrears : %d\n ",arrears);
		   printf ("enter the amount of money that you want to withdraw  : ");
		   scanf ("%d",&amount);
		   
		   if (arrears<amount ){
		   	printf ("your arrears is not enough ");
		   }
		   else {
		   	arrears = arrears - amount ;
		   	printf ("your new arrears is : %d \n",arrears);
		   }
		   break;
		   
		case 2 : 
		   printf ("your total arrears is  : %d\n ",arrears);
		   printf ("enter the amount of money that you want to invest  :");
		   scanf ("%d",&amount);
		   
		   arrears += amount ;
		   printf ("your new arrears is : %d \n",arrears);
		   break;
		
		case 3 :
			printf ("your total arrears is : %d\n",arrears);
			printf ("enter the amount of money that you want to transfer :");
			scanf ("%d",&amount);
			if (arrears<amount){
				printf ("your arrears is not enough to transfer.");
			}	
			else {
			arrears -= amount; 
		    printf ("your new arrears is: %d\n",arrears);
			}
			break;
		   
		   
		case 4 :
			printf ("your total arrears is : %d\n ",arrears);
		    break;
		    
		case 5 :
			printf ("go back the first page ");
			break;
			
		default :
			printf ("the operation that you entered does not exist.");
			break;	
		   
	}
	
	
	
	return 0;
}
