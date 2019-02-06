#include<stdio.h>
#include<math.h>

int fact(int x);

int main () {
    int x , i=1 , sign=1;
    double result, rad;
    printf("Enter Value of x: ");
    scanf("%d",&x);
    rad = x/180.0*3.1415;
    while((pow(rad,i)/fact(i))>0.001){
        result += sign*(pow(rad,i)/fact(i));
        i+=2;
        sign *= -1 ;
    }
    printf("result= %f\n",result);
    return 0 ;
}

int fact(int x){
    if(x>1){
        return x * fact(x-1);
    }
    else {
        return 1 ;
    }
}
