/* Reading characters and Strings */
#include <stdio.h>

int main(){
	char x, y[9];
	printf("Enter a string: ");
	scanf("%c%s", &x, y);
	
	printf("The input was \n");
	printf("The character \"%c\" ", x);
	printf("and the string \"%s\"\n", y);
	
	return 0;
}
