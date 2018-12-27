#include<stdio.h>

int main(){
	int number, digit, sum=0, i = 0;
	
	printf("Enter a 4 digit number: ");
	scanf("%4d", &number);
	
	while (i<4) {
		digit = number % 10;
		number = number / 10;
		sum = sum + digit;
		i++;
	}
	
	printf("Sum = %d", sum);
	return 0;
}
