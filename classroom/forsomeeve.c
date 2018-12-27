#include <stdio.h>

int main(){
	int sum = 0;
	int number;
//	
//	for (number = 2; number <=100; number += 2){
//		sum += number;
//	}
	for (number = 2; number <=100; sum += number, number += 2)
	;
	printf("Sum is %d\n", sum);
	return 0;
}


