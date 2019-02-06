#include<stdio.h>

void main(){
	int *p, sum=0, i = 0;
	int x[5] = {5, 9, 6, 3, 7};
	p = x;		/* initializing with the base address of x */
	printf("Element\t Value\t Address\n\n");
	while(i < 5){
		printf("x[%d] \t %d \t %u\n", i, *p, p);
		sum = sum + *p;
		i++, p++;
	}
	printf("\n Sum   = %d\n",sum);
	printf("\n &x[0] = %u\n", &x[0]);
	printf("\n p     = %u\n", p);
}
