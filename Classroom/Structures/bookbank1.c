#include<stdio.h>

struct book_bank {
	char title[20];
	char author[15];
	int pages;
	float price;
};

int main(){
	struct book_bank book;
	printf("Enter book information\n");
	
	printf("\nBook Title: ");
	scanf("%[^\n]s", book.title);
	
	printf("\nAuthor: ");
	scanf("%[^\n]s", book.author);
	
	printf("\nPages: ");
	scanf("%d", &book.pages);
	
	printf("\nPrice: ");
	scanf("%f", &book.price);
	
	printf("Book added successfully with information: \n");
	printf("Title: %s \nAuthor: %s \nPages: %d \nPrice: %7.2f",book.title, book.author, book.pages, book.price);
	
	return 0;
}
