#include<stdio.h>

void stat(void);

main(){
	int i;
	for(i=1; i<=3; i++)
		stat();
}

void stat(void){
	// value of x will not be destroyed on function termination
	// x will be destroyed once the program is terminated
	static int x = 0;
	x = x + 1;
	printf("%d\n",x);
}
