/**

Write a program to read a matrix and find the 
sum of all the digits in its main diagonal.

**/

#include<stdio.h>
#define SIZE 3

int main(){
	int sum = 0, i , j;
	int mat[SIZE][SIZE];
	
	for(i = 0; i <= SIZE-1; i++){
		for(j = 0; j <= SIZE-1; j++){
			printf("Enter element for [%d][%d] position: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("Your Matrix is: \n");
	for(i = 0; i <= SIZE-1; i++){
		for(j = 0; j <= SIZE-1; j++){	
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	// for sum of diagonal
	for(i = 0; i <= SIZE-1; i++){
		for(j = 0; j <= SIZE-1; j++){
			if(i == j){
				sum +=mat[i][j];
			}		
		}
	}
	
	printf("\nSum of diagonal elements is %d ", sum);
	return 0;
}
