/*
writing auto is optional and by default all variables are automatic variables
*/
#include<stdio.h>

void function1 (void);
void function2 (void);

main(){
	int m = 1000;
	function2();
	printf("%d\n", m); /* Third Output */
}

void function1 (void){
	int m = 10;
	printf("%d\n",m); /* First Output */
}

void function2 (void){
	int m = 100;
	function1();
	printf("%d\n",m); /* Second Output */
}
