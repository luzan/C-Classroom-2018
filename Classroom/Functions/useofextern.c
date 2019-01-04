#include<stdio.h>

int fun1(void);
int fun2(void);
int fun3(void);

int x; /* global */

main(){
	x = 10; /* global */
	printf("x = %d\n", x);
	printf("x = %d\n", fun1());
	printf("x = %d\n", fun2());
	printf("x = %d\n", fun3());
}

int fun1(){
	x = x + 10; /* use of global x */
	return x;
}

int fun2(){
	extern int x;	// this still means that x is declared elsewhere, and we are using the same x
	// int x;		/* this woule have been local definition of x, where x will have new value */
	x = x + 1;
	return (x);
}

int fun3(){
	x = x + 10; /* use of global x */
	return x;
}
