#include<stdio.h>
#include<string.h>

int main(){
	
	char a[] = "a", b[] = "b"; // ASCII of a = 97 b is 98
	char string1[] = "Hello ", string2[] ="There!";
	
	if(strcmp(a, b)>0){
		printf("a is greater than b");
	}else if(strcmp(a, b)<0){
		printf("b is greater than a");
	}else {
		printf("both are same");
	}
	
	printf("\n");
	printf("String after concatenation: %s", strcat(string1, string2));
}
