#include<stdio.h>
#define SIZE 3
int main(){
	int array[SIZE][SIZE];
	int esum = 0, osum = 0, i, j;
	
	for(i=0; i<=SIZE-1; i++){
		for(j=0; j<=SIZE-1; j++) {
			printf("Enter element for position [%d][%d] of array: ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	
	printf("\nYour matrix \n");
	for(i=0; i<=SIZE-1; i++){
		for(j=0; j<=SIZE-1; j++) {
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	
	//calculating sum
	for(i=0; i<=SIZE-1; i++){
		for(j=0; j<=SIZE-1; j++) {
			if(array[i][j] % 2 == 0)
        		esum += array[i][j];
    		else
		        osum += array[i][j];
		}
	}
	
	printf("\nSum of even numbers from Matrix is %d", esum);
	printf("\nSum of odd numbers from Matrix is %d", osum);
	
	return 0;
}
