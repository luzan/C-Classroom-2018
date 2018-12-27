#include<stdio.h>

main(){
	int row, col;
	// outer loop - row

	
		for (row=5; row >=1; row--){
		//inner loop - column
		for(col = 1; col<=row; col++){
			printf("%d ", col);
			 // printf("\n");
		}
		 printf("\n");
	}
	
	//return 0;
}
