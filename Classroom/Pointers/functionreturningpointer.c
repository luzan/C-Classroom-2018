#include<stdio.h>
int *larger(int *, int *);

main(){
	int a = 10;
	int b = 20;
	int *p;
	p = larger(&a, &b);
	printf("%d", *p);
}

int *larger(int *x, int *y){
	if(*x>*y)
		return x; // address of a
	else
		return y; // address of b
}


