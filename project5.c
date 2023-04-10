#include <stdio.h>
#include <stdlib.h>



int main() 
{
	char city1[10],city2[20],city3[15];
	int i;
	
	for (i=0;i<3;i++)
	{
		printf ("enter three cities : \n");
		scanf ("%s %s %s ",city1,city2,city3);
		printf ("cities that you entered : \n%s\n%s\n%s",city1,city2,city3);
		
	
	}
	
	return 0;
	
}
