//BOOK
/*
AUTHOR:KENNEDY THIGA
REG NO:CT101/G/23771/24
*/
#include<stdio.h>
#include<string.h>
struct book{
	char title [30];
	char author[30];
	char ISBN[13];
	int publicationYear;
	float price;
	
};


int main () {
	struct book book;
  strcpy(book.title, "Introduction to C Programming");
    strcpy(book.author, "John Smith");
    strcpy(book.ISBN, "9780131103627"); 
    book.publicationYear = 2022;  
    book.price = 49.99;
    
	printf("TITLE: %s\n", book.title);
    printf("AUTHOR: %s\n", book.author);
    printf("PUBLICATION YEAR: %d\n", book.publicationYear);  
    printf("ISBN: %s\n", book.ISBN);  
    printf("PRICE: %.2f\n", book.price);
	 
	
	return 0;
	
}