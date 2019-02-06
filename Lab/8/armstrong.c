#include<stdio.h>
void displayArmstrong(int, int);
int main(){
    int r1, r2;
	printf("Enter first number on range : ");
	scanf("%d", &r1);
	printf("Enter second number on range : ");
	scanf("%d", &r2);
    displayArmstrong(r1, r2);

    return 0;
}

void displayArmstrong(int r1, int r2){
	int num,r,sum,temp;
	for(num=r1;num<=r2;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
}
