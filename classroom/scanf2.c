#include<stdio.h>

int main(){
	char z[10];
	char address[80];
	
	printf("Enter a string: ");
	scanf("%[^aeiou]",z);
	printf("\nThe output was \"%s\" \n",z);
	
	return 0;
}
