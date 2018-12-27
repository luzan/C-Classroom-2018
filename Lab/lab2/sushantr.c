#include<stdio.h>



int main(void)

{

    int mat[12][12];

    int i,j,row,col;

    float average,sum=0;

    printf("Enter the number of rows and columns\n");

    scanf("%d%d",&row,&col);

    printf("Enter the elements of the matrix\n");

    for(i=0;i<row;i++)

    {

        for(j=0;j<col;j++)

        {

            scanf("%d",&mat[i][j]);

        }

    }

    printf("The elements in the matrix are\n");

    for(i=0;i<row;i++)

    {

        for(j=0;j<col;j++)

        {

            printf("%d\t",mat[i][j]);

        }

        printf("\n");

    }

    for(i=0;i<row;i++)

    {

        for(j=0;j<col;j++)

        {

            sum=sum+mat[i][j];

        }

    }

    printf("Sum is:-%f",sum);

    average=sum/(row*col);

    printf("\nAverage of all the elements of the matrix = %f",average);

}
