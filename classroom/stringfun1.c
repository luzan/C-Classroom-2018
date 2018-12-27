#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[] = "ab", s2[] = "ac"; // ASCII of a = 97, b = 98
	char string1[] = "Hello ", string2[] ="There!";
	char string3[20];
	
	printf("\nstrcmp()\n");
	if(strcmp(s1, s2)>0){  /// s1 - s2 == 98 - 97
		printf("a is greater than b");
	}else if(strcmp(s1, s2)<0){
		printf("b is greater than a");
	}else {
		printf("both are same");
	}
	
	printf("\n");
	printf("\nstrcat()\n");
	printf("String after concatenation: %s", strcat(string1, string2));
	printf("\nString1 is now: %s", string1);
	printf("\nString2 is still: %s", string2);
	
	printf("\n");
	printf("\nstrlen()\n");
	printf("Length of %s is %d",string1, strlen(string1));
	printf("\nsize of string3 array is %d", sizeof(string3));
	
	printf("\n");
	printf("\nstrcpy()\n");
	strcpy(string3, string1);
	printf("string3 is %s", string3);
	
	
}
