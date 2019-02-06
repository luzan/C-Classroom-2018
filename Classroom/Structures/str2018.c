// pre-processor directives
#include<stdio.h> 
#include<string.h>
#include<stdlib.h>

//  length for all character strings 
#define LEN 45
// define size to hold number of students
#define SIZE 2

// structure for student
struct Student {
	char name[LEN+1];
	int roll_no;
	float gpa[8]; // array to store GPAs for 8 different semesters
	// nested structure to store address
	struct Address{
		int ward_no;
		char street_name[LEN+1];
		char city[LEN+1];
	}address;
	// tag name is optional if we write the structure definition here
	// nested structure to store date of birth
	struct DOB{
		int day;
		char month[15];
		int year;
	}dob;
	// let me show you how we can define structure outside of this structure 
	// and declare a structure variable using its tag name to nest it here
}class2018[SIZE];
// we created a structure array of Student with variable name class2018 of our SIZE

int main(){
	int i, j, choice = 0;
	// i and j will be used for loop counters
	// choice will be used to handle menu driven structure
	float avg_gpa;
	// avg_gpa will be used to store average gpa
	
	
	printf("Enter Student Information\n");
	// loop to ask student information
	// this will iterate for SIZE times.
	for(i=0;i<=SIZE-1;i++){
		
		printf("\nEnter name of student: ");
		scanf("%s", class2018[i].name);
		// %s to store string
		// because we are storing name in a character array we don't need & 
		// as array name already points to base address
		
		printf("\nEnter roll number of student: ");
		scanf("%d", &class2018[i].roll_no);
		// %d is to store integer number, where we'll also need &
		
		// now that we need to store 8 different GPAs for each student
		// we need a nested loop to collect 8 GPAs for student in index i
		for(j=0;j<8;j++){
			printf("\nEnter gpa of %s for Semester %d: ", class2018[i].name, j+1);
			scanf("%f", &class2018[i].gpa[j]);
			// for every student in index i, this will collect j i.e 8 different gpas
		}
		
		printf("\n\nEnter Address Information");
		
		printf("\nEnter ward number: ");		
		scanf("%d", &class2018[i].address.ward_no);
		
		printf("\nEnter Street name: ");
		scanf("%s", class2018[i].address.street_name);
			
		printf("\nEnter City : ");
		scanf("%s", class2018[i].address.city);
				
		printf("\n\nEnter Date of Birth ");
		
		printf("\nDay (15) : ");
		scanf("%d", &class2018[i].dob.day);
		
		printf("\nMonth (Mar) : ");
		scanf("%s", class2018[i].dob.month);	
			
		printf("\nYear (2000) : ");
		scanf("%d", &class2018[i].dob.year);
	}
	
	//  now lets create a menu driven structure for with 4 task on menu
	// 3 task are given in question itself 
	// we'll add one more for exiting for the program
	
	while(choice != 4){
		
		// let's create our menu items first 
		printf("\n\nMenu\n\n");
		printf("\n1. Print Name and Address of students who have \"Malepatan\" as street name.");
		printf("\n2. Print Name and GPAs of students who scores average GPA of 3.2 or above.");
		printf("\n3. Print Name and Date of birth of students who were born before 2000.");
		printf("\n4. Exit");
		printf("\n\nEnter your Choice : ");
		scanf("%d", &choice);
	
		switch(choice){
			case 1: 
				printf("Student with address Malepatan are: \n");
				for(i=0;i<=SIZE-1;i++){
					
					if(strcmp(class2018[i].address.street_name, "Malepatan")==0)
						printf("%s\t%s\n", class2018[i].name, class2018[i].address.street_name);					
					
				}
			break;
			
			case 2:
				printf("\nStudent with average GPA of 3.2 or above are: \n");
				for(i=0;i<=SIZE-1;i++){
					
					avg_gpa = 0;
					for(j=0;j<8;j++)
						avg_gpa += class2018[i].gpa[j];
					
					avg_gpa = avg_gpa/8.0;
					
					if(avg_gpa >= 3.2)
						printf("%s\t%7.2f\n", class2018[i].name, avg_gpa);					
								
				}
			break;
			
			case 3:
				printf("\nStudent who were born before 2000 are: \n ");
				for(i=0;i<=SIZE-1;i++){
					
					if(class2018[i].dob.year < 2000)
						printf("%s\t%d-%s-%d\n", class2018[i].name, 
							class2018[i].dob.day, class2018[i].dob.month, class2018[i].dob.year);					
					
				}
			break;
			
			case 4: 
				exit(0);
			break;
			
			default:
				printf("\nInvalid Choice!! enter (1 - 4)");
		}
	}
	
	
	return 0;
}

























































