#include<stdio.h>

main(){
	int row, col;
	// outer loop - row
	for (row=1; row <=5; row++){
		//inner loop - column
		for(col = 1; col<=5; col++){
			printf("%d ", col);
			 // printf("\n");
		}
		 printf("\n");
	}
	
	//return 0;
}
