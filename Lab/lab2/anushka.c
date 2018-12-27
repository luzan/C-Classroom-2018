#include<stdio.h>
#define ROWS 3
#define COLUMNS 3
int main (){
	int matrix[ROWS][COLUMNS],i,j,elements,sum=0,average;
	
	for(i=0;i<=ROWS-1;i++)
	{
		for(j=0;j<=COLUMNS-1;j++)
		{
			printf("Enter the element for matrix[%d][%d]",i,j);
			scanf("%d",&matrix[i][j]);
			sum=sum+matrix[i][j];	
		}
	}
	for(i=0;i<=ROWS-1;i++)
	{
		for(j=0;j<=COLUMNS-1;j++)
		{
			printf("%d",matrix[i][j]);
			
		}
		printf("\n");
	}
	
	average=sum/9;
	printf("The total sum of the elements that you inputed is %d and the aaverage is %d",sum,average);

}
