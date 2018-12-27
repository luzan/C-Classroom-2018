#include<stdio.h>

int main(){
	int i, j;
	int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int array2[2][3] = { 1, 2, 3, 4, 5};
	int array3[2][3] = { { 1, 2 }, { 4 } };
	
	printf("values in array 1 by row are: \n");
	
	for(i = 0; i<=1; i++){
		for(j=0; j<=2; j++){
			printf("%d ", array1[i][j]);
		}
		printf("\n");
	}
	
		printf("values in array 3 by row are: \n");
	
	for(i = 0; i<=1; i++){
		for(j=0; j<=2; j++){
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
	
		printf("values in array 3 by row are: \n");
	
	for(i = 0; i<=1; i++){
		for(j=0; j<=2; j++){
			printf("%d ", array3[i][j]);
		}
		printf("\n");
	}
}
