#include<stdio.h>
#include<conio.h>
int main()
{
	 int number, i=0, di = 10000;
	 
	 printf("Enter a 5 digit number\n");
	 scanf("%5d",&number);
	 printf("\n%d\n", number);
	 while (i<4) {
		number = number % di;
		di = di / 10;
		printf("%d\n",number);
		i++;
	}
	 	
 	getch();
 }
