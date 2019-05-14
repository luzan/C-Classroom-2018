//    Write a program to search an element in one-dimensional
//    array containing five integer elements.

#include<stdio.h>

int main(){
	int arr[5] = {6, 2, 3, 1, 8};
	int i, num, found = 0;
	// found is set to 1 if number is found in array
	
	printf("Enter number you want to search: ");
	scanf("%d", &num);
	
	for(i=0;i<5;i++){
		// checking if number is in array
		if(num == arr[i])
			found = 1; // setting found to 1 if found
	}
	
	if(found) // if found is true i.e. 1
		printf("Your number %d is found on array", num);
	else
		printf("Your number %d is not found on array", num);
	return 0;
}
