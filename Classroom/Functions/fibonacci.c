// example of recursion to print fibonacci series
// 0, 1, 1, 2, 3, 5, 8, 13, 21 ..
// thrid element of series is created by adding 2 elements before it,
// and so on and so fourth for other consecutive numbers in series
#include <stdio.h>

long fibonacci (long n);

int main (){
	long result;
	long number;
	int i;

	printf("Enter and integer: ");
	scanf("%ld", &number);

	for (i=0; i<=number; i++){
		printf("%ld, ", fibonacci (i));
	}

//	result = fibonacci (number);
//
//	printf("Fibonacci (%ld) = %ld\n", number, result);
	return 0;
}

long fibonacci (long n){
	/* base case */
	if (n ==0 || n == 1){
		return n;
	} else { /* recursive step */
		return fibonacci (n - 1) + fibonacci (n - 2);
	}
}
