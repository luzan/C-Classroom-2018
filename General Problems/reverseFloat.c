/*
** Question:
** Write a function that is passed an array of pointers to floats
** and returns a newly created array that contains those float values
** in reverse order.
*/

/*
Break down:
1. A function reverseFloat (float*)
2. return newly created array 
	-- this is one challenging part 
		as in c, when some variables are created with automatic storage
		duration inside a sub-function then reference to it will become invalid once it leaves its 
		declaring scope, i.e., when the function returns.
	-- solution is by using dynamic allocation.
3. Reverse the float values

*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float *reverseFloat(float**);

int main(){
	float *arrFloat[3]; // let's do this for 3 floats
	float a = 23.652, b = 35.369, c = 65.893;
	int i;
	// assigning the address of float values to pointer array
	arrFloat[0] = &a;
	arrFloat[1] = &b;
	arrFloat[2] = &c;
	// create new pointer for reversed float values
	float *revPtr = reverseFloat(arrFloat);
	
	// printing original values values
	printf("Original values \n%7.3f %7.3f %7.3f \n", a, b, c);
	
	// printing reversed values
	printf("After reverse \n");
	for(i = 0; i<3 ; i++,revPtr++){
		printf("%7.3f ", *revPtr);
	}
	
	free(revPtr);
	
	return 0;
}

float* reverseFloat(float **arrWFloat){
	float *newArr = malloc(3);
	int i, j = 1, rem, rem1, intPart, floatPart_1, floatPartInt;
	float floatPart, floatPart_2;
	
	for(i = 0; i < 3; i++){		
		printf("%7.3f ", **(arrWFloat+i));
	}
	printf("\n");
	
//	for(i = 0; i < 3; i++){
//		intPart = **(arrWFloat + i);
//		floatPart = **(arrWFloat + i) - intPart;
//		    do
//		    {
//		        rem = intPart%10;
//		        intPart/=10;
//		        if (j==1)
//		        {
//		            // decimal to integer!
//		            int floatPart_1;
//		            float floatPart_2;
//		            int ax;
//		            while ((floatPart-floor(floatPart))!=0)
//		            {
//		                floatPart*=10;
//		                //printf("\n\nfloatPart=%f , int(floatPart)=%d\n\n",floatPart,ax);
//		            }
//		            int floatPartInt,rem1;
//		            floatPartInt = round(floatPart);
//		            // printf("\n\nfloatPart = %f , floatPartInt=%d\n\n",floatPart,floatPartInt);
//		             do
//		            {
//		                rem1 = floatPartInt%10;
//		                floatPartInt/=10;
//		                printf("%d",rem1);
//		            }while(floatPartInt!=0);
//		            printf(".");
//		        }
//		        printf("%d",rem);
//		        j++;
//		 
//		    }while(intPart!=0);
//	}
	return newArr;
}


