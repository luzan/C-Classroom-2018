#include <stdio.h>

int main(){
	int count, n;
	float x, y;
	printf("Enter the values of x and n : ");
	scanf("%f %d", &x, &n);
	y = 1.0;
	count = 1;			/* Initialisation */
	/* LOOP BEGINs */
	while (count <= n)	/* Testing */
	{
		y = y*x;
		count++;		/* Incrementing Counter */
	}
	/* END OF LOOP */
	printf("\nx = %.2f; n = %d; x to power n = %.2f\n", x, n, y);
	return 0;
}
