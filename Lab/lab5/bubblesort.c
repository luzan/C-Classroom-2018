#include<stdio.h>
#define SIZE 20

int main(){
	
	int a[SIZE], n;
	int pass; /* passes counter */
	int i; /* comparisions counter */
	int hold; /* temporary location used to swap array elements */
	
	printf("Enter how many values do you want to enter in array(max. 20)? ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter element for position [%d]", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nData items in original order\n");
	
	/* output original array */
	for(i=0; i<n; i++){
		printf("%4d", a[i]);
	}
	printf("\n");
	
	for (pass = 1; pass < n; pass++){
		
		for (i = 0; i< n - 1; i++){
			/*  
				compare adjacent elements and swap them
				if first element is greater than second
				element 
			*/
			if(a[i] > a[i+1]){
				hold = a[i];
				a[i] = a[i + 1];
				a[i+1] = hold;
			}
		}
	}
	
	printf("\nData items in ascending order\n");
	
	/* output sorted array */
	for(i=0; i<n; i++){
		printf("%4d", a[i]);
	}
	return 0;
}
