#include <stdio.h>

int main(){
	int count;
	
		//omitting expression 1
//	count = 2;
//	for ( ; count <= 20; count += 2){
//		printf("Count is %d\n", count);
//	}


	// omitting expression 2
//	for (count = 2; ; count += 2){
//		printf("Count is %d\n", count);
//	}
	
	// omitting expression 3
	for ( count = 2; count <= 20; ){
		printf("Count is %d\n", count);
		count += 2;
	}
	
	return 0;
}


