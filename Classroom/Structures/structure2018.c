#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define LEN 50
#define SIZE 2

struct DOB {
	int day;
	char month[10];
	int year;
};

struct Student{
	char name[LEN+1];
	int roll_no;
	float gpa[8];
	
	struct {
		int ward_no;
		char street_name[LEN+1];
		char city[LEN+1];
	}address;
	
	struct DOB dob;
};

int main(){
	int i, j, choice=0;
	struct Student class2018[SIZE];
	float avg_gpa;
	
	for(i=0;i<=SIZE-1;i++){
		printf("\nEnter name of student: ");
		scanf("%s", class2018[i].name);
		
		printf("\nEnter roll no: ");
		scanf("%d", &class2018[i].roll_no);
		
		for(j=0;j<8;j++){
			printf("\nEnter GPA of %s for semester %d", class2018[i].name, j+1);
			scanf("%f", &class2018[i].gpa[j]);
		}
		
		printf("\nEnter Address Information");
		printf("\nEnter ward no: ");
		scanf("%d", &class2018[i].address.ward_no);
		
		printf("\nEnter street name: ");
		scanf("%s", class2018[i].address.street_name);
		
		printf("\nEnter city: ");
		scanf("%s", class2018[i].address.city);
		
		printf("\nDate of Birth Information");
		printf("\nEnter Day (10) : ");
		scanf("%d", &class2018[i].dob.day);
		
		printf("\nEnter month (jan) : ");
		scanf("%s", class2018[i].dob.month);
		
		printf("\nEnter year (1999) : ");
		scanf("%d", &class2018[i].dob.year);
	}
	
	while( choice != 4){
		printf("\n\nMenu\n\n");
		printf("\n1.	Print Name and Address of students who have Malepatan as street name.");
		printf("\n2.	Print Name and GPAs of students who scores average GPA of 3.2 or above.");
		printf("\n3.	Print Name and Date of birth of students who were born before 2000.");
		printf("\n4.    Exit");
		
		printf("Enter your choice (1 - 4) : ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("\nStudent with address Malepatan are: \n");
				for(i=0;i<=SIZE-1;i++){
					
					if(strcmp(class2018[i].address.street_name, "Malepatan") == 0){
						printf("%s\t%s\n", class2018[i].name, class2018[i].address.street_name);
					}
				}
			break;
			
			case 2:
				printf("\nStudent with average GPA > 3.2\n");
				for(i=0;i<SIZE;i++){
					avg_gpa = 0;
					for(j=0;j<8;j++){
						avg_gpa += class2018[i].gpa[j];
					}
					avg_gpa = avg_gpa/8.0;
					if(avg_gpa > 3.2){
						printf("%s\t%f\n", class2018[i].name, avg_gpa);
					}
				}
			break;
			
			case 3:
				printf("\nStudent who were born before 2000\n");
				for(i=0;i<SIZE;i++){
					if(class2018[i].dob.year < 2000){
						printf("%s\t%d-%s-%d\n", class2018[i].name, class2018[i].dob.day, 
							class2018[i].dob.month, class2018[i].dob.year);
					}
				}
			break;
			
			case 4:
				exit(0);
			break;
			
			default:
				printf("Invalid Choice!!");
		}
	}
	
	return 0;
	
}

