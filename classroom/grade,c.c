#include<stdio.h>

int main(){
	int marks;
	
	printf("Enter your mark to know your grades (0-100): ");
	scanf("%d", &marks);
	
	if(marks>79)
		printf("Honours\n");
	else if (marks > 59)
		printf("First Division\n");		
	else if (marks > 49)
		printf("Second Division\n");	
	else if (marks > 39)
		printf("Third Division\n");	
	else
		printf("Fail\n");	

return 0;
}





