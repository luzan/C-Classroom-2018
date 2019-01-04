// example of recursion for finding factorial of 3
#include<stdio.h>
main(){
	printf("%d ",factorial(3));
}

int factorial (int n){
	if (n > 1)
		return factorial (n-1) * n;
	else
		return 1;
}
