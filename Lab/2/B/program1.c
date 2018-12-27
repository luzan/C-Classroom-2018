#include<stdio.h>

int main(){
	int a, b;
	
	printf("Enter Number A: ");
	scanf("%d", &a);
	printf("Enter Number B: ");
	scanf("%d", &b);
	
	printf("Your inputs, \n");
	printf("A = %d, B = %d", a, b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nAfter swapping, \n");
	printf("A = %d, B = %d", a, b);
	
	return 0;
}
