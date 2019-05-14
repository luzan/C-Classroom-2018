//WAP with user defined funtion using pointer to convert all 
//the uppercase to lower case & viceversa in a string given 
//by the user.

#include<stdio.h>

void convert(char*, char*);

int main()
{
   int c = 0;
   char ch[100], s[100];
 
   printf("Input a string\n");
   gets(s);
   
   convert(s, ch);
   printf("%s\n", s);
 
   return 0;
}

void convert(char* s, char* r){
	int i = 0;
	
	while (*(s+i) != '\0') {
      *(r+i) = *(s+i);
      if (*(r+i) >= 'A' && *(r+i) <= 'Z')
         *(s+i) = *(s+i) + 32;
      else if (*(r+i) >= 'a' && *(r+i) <= 'z')
         *(s+i) = *(s+i) - 32;  
      i++;
   }
}
