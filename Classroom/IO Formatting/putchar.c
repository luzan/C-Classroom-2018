#include<stdio.h>
#include<ctype.h>
/*  
	ctype.h header file of the C Standard Library 
	declares several functions that are useful 
	for testing and mapping characters.
*/
main(){
	char alphabet;
	printf("Enter an alphabet: ");
	putchar('\n'); // move to next line
	alphabet = getchar();
//	if(islower(alphabet)){
//		putchar(toupper(alphabet));
//		
//		
//	}
//		
//	else
//		putchar(tolower(alphabet));
	putchar(alphabet);
		
}
