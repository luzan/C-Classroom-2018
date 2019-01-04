/*
Passing two dimensional array to function
*/
#include<stdio.h>

main(){
	int M=3, N=2;
	// function prototype and definition should include second dimension of Array.
	double average(int[][N],int, int);
	double mean;
	int matrix[3][2]={
					{1, 2},
					{3, 4},
					{5, 6}
				};
	mean = average(matrix, M, N);
	printf("%f is the average of values in matrix", mean);
}

double average(int x[][2],int M, int N){
	int i, j;
	double sum = 0.0;
	for(i=0; i<M; i++)
		for(j=0;j<N; j++)
			sum += x[i][j];
	return(sum/(M*N));
}
