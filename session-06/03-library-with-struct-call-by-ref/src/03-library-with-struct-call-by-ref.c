#include <stdio.h>
#include <string.h>
/* std int used for making portable code by globalizing datatypes */
#include <stdint.h>
/* Declare new type Book */
struct Book {
	uint16_t id;
	int8_t name[50];
	int8_t author[20];
	uint8_t edition;
	float price;
};

/* Array of structure of type Book */
struct Book library[10];

void print_book_info(struct Book * book);

int main(void) {

	/* 1 Books */
	library[0].id = 9788;

	/* strcpy */
	strcpy((char *) library[0].name, "The C Programming Language");
	strcpy((char *) library[0].author, "Dennis and Brain");
	library[0].edition = 2;
	library[0].price = 100;


	print_book_info(&library[0]);
	return 0;
}

void print_book_info(struct Book * book)
{
	printf("Book info\n"
			"%4d %-50s  %-20s  %2d %4.2f"
			"\n", (*book).id, (*book).name, (*book).author, book->edition, book->price);
}
