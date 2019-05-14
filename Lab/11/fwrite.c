#include<stdio.h>

struct Student
{
      int roll;
      char name[25];
      float marks;
};

void main()
{
      FILE *fp;
      char ch;
      struct Student Stu;

      fp = fopen("Student.dat","w");            //Statement   1

      if(fp == NULL)
      {
             printf("\nCan't open file or file doesn't exist.");
             exit(0);
      }

      do
      {
              printf("\nEnter Roll : ");
              scanf("%d",&Stu.roll);

              printf("Enter Name : ");
              scanf("%s",Stu.name);

              printf("Enter Marks : ");
              scanf("%f",&Stu.marks);

              fwrite(&Stu,sizeof(Stu),1,fp);

              printf("\nDo you want to add another data (y/n) : ");
              ch = getche();

      }while(ch=='y' || ch=='Y');

      printf("\nData written successfully...");

      fclose(fp);
}
