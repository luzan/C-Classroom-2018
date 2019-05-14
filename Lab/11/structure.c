#include<stdio.h>
#define REC 2
struct DOB {
	int month;
	int day;
	int year;
};
struct Student {
	int roll_no;
	char name[25];
	char address[20];
	char faculty[30];
	struct DOB dob;
};

int main(){
	FILE *fptr;
	struct Student student[2], student1[REC];
	int i, count=0;
	fptr = fopen("student.txt", "w");
	for(i=0;i < REC; i++){
		printf("Enter Student Roll No: ");
		scanf("%d", &student[i].roll_no);
		printf("Enter Student Name: ");
		scanf("%s", student[i].name);
		printf("Enter Student Address: ");
		scanf("%s", student[i].address);
		printf("Enter Student Faculty: ");
		scanf("%s", student[i].faculty);
		printf("Enter Student DOB Day - (DD) : ");
		scanf("%d", &student[i].dob.day);
		printf("Enter Student DOB Month - (MM) : ");
		scanf("%d", &student[i].dob.month);
		printf("Enter Student DOB Year - (YYYY) : ");
		scanf("%d", &student[i].dob.year);
		fprintf(fptr, "%d %s %s %s %d %d %d ", student[i].roll_no, student[i].name, student[i].address, 
				student[i].faculty, student[i].dob.day, student[i].dob.month, student[i].dob.year);
		printf("\n%d Record added to file\n\n", i+1);
	}
	
	fclose(fptr);
	
	fptr = fopen("student.txt", "r+");
i = 0;
while(!feof(fptr)){
//	for(i=0; i< REC; i++){
		fscanf(fptr, "%d%s %s %s %d %d %d", &student1[i].roll_no, student1[i].name, student1[i].address, 
				student1[i].faculty, &student1[i].dob.day, &student1[i].dob.month, &student1[i].dob.year);
		if(strcmp(student1[i].address, "Kathmandu") != 0){
			printf("Roll no: %d\tName: %s\tAddress: %s\tFaculty: %s\tDate of Birth: %d - %d - %d\n",
				student1[i].roll_no, student1[i].name, student1[i].address, 
				student1[i].faculty, student1[i].dob.day, student1[i].dob.month, student1[i].dob.year);
		}
		i++;
	}	
}
