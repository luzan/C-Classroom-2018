#include<stdio.h>

int main(){
	char str1[100];
	int start, mid, end, length = 0;
	
	printf("Enter a string without space: ");
	scanf("%s", str1);
	
	//check length of string without using string function
	while(str1[length] != '\0')
		length++;
	
	end = length - 1;
	mid = length/2;
	 printf("length = %d \tend = %d \t mid = %d \n",length, end, mid);
	for(start = 0; start < mid; start++,end--)
	{
		if(str1[start] != str1[end]){
			printf("Not a palindrome \n");
			break;
		}
		
	}
	
	if (start == mid)
		printf("String is palindrome.\n");
	
	return 0;
	
}
