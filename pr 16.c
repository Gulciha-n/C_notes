#include <stdio.h>
#include <stdlib.h>



int main( ) {

    char name[25];
    int age ;
	
	printf ("what is your name ? :");
	//scanf ("%s",&name);
	fgets (name, 25 , stdin);
	
	printf ("how old are you ? : ");
	scanf ("%d",&age);
	
	printf ("\nHello %s how are you?",name);
	printf ("\nyou are %d yeard old.",age);
	

    return 0;


	
	return 0;
}
