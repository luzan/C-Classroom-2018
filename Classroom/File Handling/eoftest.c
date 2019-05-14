#include <stdio.h>
#include<conio.h>

void main()
{
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))
	{
		ch=getc(fp);
		printf("%c ",ch);
	}
	getch();
}





