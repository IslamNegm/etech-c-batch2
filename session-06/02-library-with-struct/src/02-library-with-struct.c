#include <stdio.h>
#include <string.h>
/* Declare new type Book */
struct Book {
	int id;
	char name[50];
	char author[20];
	char edition;
	float price;
};

/* Array of structure of type Book */
struct Book library[10];

void print_book_info(struct Book book);

int main(void) {

	/* 1 Books */
	library[0].id = 9788;

	/* strcpy */
	strcpy(library[0].name, "The C Programming Language");
	strcpy(library[0].author, "Dennis and Brain");
	library[0].edition = 2;
	library[0].price = 100;

	print_book_info(library[0]);
	return 0;
}

void print_book_info(struct Book book)
{
	printf("Book info\n"
			"%4d %-50s  %-20s  %2d %4.2f"
			"\n", book.id, book.name, book.author, book.edition, book.price);
}
