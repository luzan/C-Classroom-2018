#include<stdio.h>
int main(){
	int r, row, col, element = 1;
	
	printf("Enter number of rows to print: ");
	scanf("%d", &r);
	
	for (row = 1; row<= r; row++){
		
		for(col=1; col <= row; col++){
			printf("%d", element);
			element++;
			printf("\t");
		}
		
		printf("\n");
	}
	return 0;	
}

