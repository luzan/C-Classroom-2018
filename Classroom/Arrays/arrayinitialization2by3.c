/** 
Array example - initializing 2-by-3 array on runtime
and printing array elements
**/
#include<stdio.h>

int main(){
	int i, j;
	int array1[2][3];
	
	printf("Enter array elements for 2 by 3 array: \n");
	for(i = 0; i<=1; i++){
		for(j=0; j<=2; j++){
			scanf("%d", &array1[i][j]);
			
		}
	}
	
	printf("Your array is\n");
	for(i = 0; i<=1; i++){
		for(j=0; j<=2; j++){
			printf("%d ", array1[i][j]);
		}
		printf("\n");
	}
	
}
