#include<stdio.h>
int main(){
	int m = 12345, n = 987654;
	float y = 98.7654;
	char z = 'Z';
	char name[20] = "ANIL KUMAR GUPTA";
	
	printf("Integer Output\n");
	printf("%d\n",m);
	printf("%10d\n",m);
	printf("%-10d\n",m);
	printf("%10ld\n",n);
	
	printf("Float Output\n");
	printf("%7.2f\n",y);
	printf("%*.*f\n",7,2,y);
	
	printf("Character Output\n");
	printf("%c\n%3c\n%5c\n", z, z, z);
	printf("%20s\n", name);
	printf("%20.10s\n",name);
	
	return 0;
}


