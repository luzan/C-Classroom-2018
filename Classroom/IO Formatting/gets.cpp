// C getchar function example
#include <stdio.h> 

int main()
{
	char choice;
	
	printf("\n Type C to continue: ");
	choice = getchar();
	
	if(choice == 'C' || choice == 'c')
		printf("\nYou can continue \n");
	else
		printf("\nIt ends here\n");
	
	 
	return 0;
}

