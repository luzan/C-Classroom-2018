#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, d, x1, x2;
	printf("Enter values for a b and c");
	scanf("%f%f%f",&a,&b,&c);
	d = (b*b) - (4*a*c);
	
	if(d < 0){
		printf("Roots are imaginary\n");
	}else{
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("\n Root 1 (X1): %f", x1);
		printf("\n Root 2 (X2): %f", x2);
	}
	
	return 0;
}
