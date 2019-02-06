/*
	Chapter 7 - Pointer
	Using the & and * Operator
*/
#include<stdio.h>

int main(){
	int a; 		/* a is an integer */
	int *aPtr; 	/* aPtr is a pointer to an integer */
	
	a = 7;
	aPtr = &a; 	/* aPtr set to address of a */
	
	printf( "The address of a is %p"
			"\nThe value of aPtr is %p", &a, aPtr);
	
	printf( "\nThe value of a is %d"
			"\nThe value of aPtr is %d", a, *aPtr);
			
	printf( "\n\nShowing that * and & are inverses of"
			"each other. \n&*aPtr = %p"
			"\n*&aPtr = %p\n", &*aPtr, *&aPtr);
	
	return 0;
}
