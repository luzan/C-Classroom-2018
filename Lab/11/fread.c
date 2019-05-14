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

      fp = fopen("Student.dat","r");            //Statement   1

      if(fp == NULL)
      {
             printf("\nCan't open file or file doesn't exist.");
             exit(0);
      }

      printf("\n\tRoll\tName\tMarks\n");

      while(fread(&Stu,sizeof(Stu),1,fp)>0)
          printf("\n\t%d\t%s\t%f",Stu.roll,Stu.name,Stu.marks);

      fclose(fp);
}


