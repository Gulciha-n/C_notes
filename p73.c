#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int age =21;
	int *pAge =&age;
	
	printf ("your age is : %d\n",age );
	printf ("value at stored adress : %p\n",*pAge);//the value of myAge with the pointer
	printf ("%p\n",pAge); //the memory address of myAge with the pointer 
	printf ("%p\n",&age); 

int myAge = 43;     // Variable declaration
int* ptr = &myAge;  // Pointer declaration

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr); //ADRESS

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);	//VALUE
	return 0;
}
