#include<stdio.h>

int main(){
	int num = 1;
	
	do {
		if(num == 6 || num == 10){
			printf("%d is not available \n", num);
			num++;
			continue;
		}
		
		printf("%d is available \n", num);
		num++;
	}while(num<=10);

	return 0;
}
