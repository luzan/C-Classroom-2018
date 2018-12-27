#include<stdio.h>

int main(){
	int x, y, z, temp;
	
	printf("Enter X: ");
	scanf("%d", &x);
	printf("Enter Y: ");
	scanf("%d", &y);
	printf("Enter Z: ");
	scanf("%d", &z);
	printf("\nYou entered, \n");
	printf("\nX = %d, Y = %d, Z = %d\n", x, y, z);
	
	temp = x;
	x = y;
	y = z;
	z = temp;
	printf("\nAfter rotation, \n");
	printf("\nX = %d, Y = %d, Z = %d\n", x, y, z);
	
	return 0;
}
