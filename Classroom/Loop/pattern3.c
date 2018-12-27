#include<stdio.h>

int main(){
	int i=0, j= 0;
	
	for (i=1;i<=5;i++){
		
		for(j=5;j>=i;j--){
			printf("* ");
		}
		printf("\n");
	}
}

