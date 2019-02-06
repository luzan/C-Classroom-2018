#include<stdio.h>

int main(){
	int x = 18, y = 16, z;

	y += x++;
	z = ++x + y++;
	x = x + y + z--;
	printf("\n x = %d\ny = %d\nz = %d", x,y,z);
	return 0;
}
