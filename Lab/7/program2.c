#include<stdio.h>

int min(int, int);

void main(){
	int a, b, c, d, mini;
	printf("Enter 2 numbers to find min: ");
	scanf("%d%d", &a, &b);
	mini = min(a, b);
	printf("\nMinimum in %d and %d is %d", a, b, mini);
	
	printf("\n\nEnter 3 numbers to find min: ");
	scanf("%d%d%d", &a, &b, &c);
	mini = min(min(a, b), c);
	printf("\nMinimum in %d, %d and %d is %d", a, b,c, mini);
	
	printf("\n\nEnter 4 numbers to find min: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	mini = min(min(a, b), min(c,d));
	printf("\nMinimum in %d, %d, %d and %d is %d", a, b,c,d, mini);
	
}
int min(int a, int b){
	if(a>b)
		return b;
	else
		return a;
}
