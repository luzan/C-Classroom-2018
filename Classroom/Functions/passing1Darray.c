/*
Passing one dimensional array to function
*/
#include<stdio.h>
float largest(float a[], int n);

main(){
	int n = 4;
	float value[5] = {2.5, -4.75, 1.2, 3.67, 6.3};
	printf("%f\n", largest(value, 5));
}

float largest (float a[], int n){
	int i;
	float max;
	max = a[0];
	for(i=1; i< n; i++)
		if(max<a[i])
			max = a[i];
	return max;
}
