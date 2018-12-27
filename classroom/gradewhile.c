#include <stdio.h>
int main ( )
{
 	int  numStudents, counter, grade, total, average ;
 	total = 0 ;
 	counter = 1 ;
 	printf("Enter the number of students: ");
 	scanf("%d",&numStudents);
 	while ( counter <= numStudents )
 	{
 	     printf ("Enter a grade : ") ;
 	     scanf ("%d", &grade) ;
 	     total = total + grade ;
 	     counter = counter + 1 ;
 	}
 	average = total / numStudents ;
 	printf ("Class average is: %d\n", average) ;
    return 0 ;
}

