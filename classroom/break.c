#include<stdio.h>

int main()
{
	int i = 0;
	int guess , maxAmount = 20;
	printf("What\'s your guess? ");
	scanf("%d", &guess);
	for(i=1;i<=maxAmount; i++){
		printf("%d\n",i);
		if(i == guess){
			
			printf("\nGot your guess %d\n", guess);
			break;
			
		}
		
		
	}	
	
	return 0;
}
