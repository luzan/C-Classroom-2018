#include<stdio.h>
void swap (int *a, int *b);

void main(){
	int a, b;
	int *aPtr, *bPtr;
	aPtr = &a;
	bPtr = &b;
	printf("Enter value of a and b; ");
	scanf("%d%d", &a, &b);
	printf("\nOriginal Value \na = %d\nb = %d", a, b);
	swap(aPtr, bPtr);
	printf("\nAfter Swap Value \na = %d\nb = %d", a, b);
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
