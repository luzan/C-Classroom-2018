#include <stdio.h>

int main(){
	int n, i=1, count=0;
	
	printf("Enter a number to be tested for Prime: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(n%i == 0){
			count = count + 1;
		}
	}
	
	if (count == 2){
		printf("\n%d is Prime", n);
	} else {
		printf("\n%d is not Prime", n);
	}
	
	return 0;
}
