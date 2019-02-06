#include<stdio.h>
int main(){
	char *name="ujjwal";
	char *cptr;
	cptr = name;
	int length;
	while(*cptr != '\0'){
		cptr++;
	}
	length = cptr - name;
	printf("%d", length);
	return 0;
}
