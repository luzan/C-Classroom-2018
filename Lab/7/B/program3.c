#include<stdio.h>

int main(){
	int number, digit, sum=0, i = 0;
	
	printf("Enter a 4 digit number: ");
	scanf("%4d", &number);
	
	printf("Sum = %d", sumdigit(number));
	return 0;
}

int sumdigit(int num){
	if(num != 0)
		return (num % 10 + sumdigit(num / 10));
	else
		return 0;
}
