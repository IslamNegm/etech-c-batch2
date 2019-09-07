#include <stdio.h>
#include <string.h>

/* Global */
int id[10];
/* Array of 10 strings, max for each string 50 character
 * {
 * 	 {'T', 'h', 'e', ' ', 'o', 'n', 'e', '\0'},
 * 	 ..
 * 	 .
 * }
 * */
char name[10][50];
char author[10][20];
char edition[10];


void print_book_info(int id, char * name, char *author, char edition);

int main(void) {
	/* 1 Books */
	id[0] = 7898;
	/*
	 * Invalid:
	 * name[0] = "The C Programming Language";
	 */
	strcpy(name[0], "The C Programming Language");
	strcpy(author[0], "Brain and Dennis");
	edition[0] = 2;
	print_book_info(id[0], name[0], author[0], edition[0]);

	return 0;
}

void print_book_info(int id, char * name, char *author, char edition)
{
	printf("Book info\n"
			"%4d %-50s  %-20s  %2d"
			"\n", id, name, author, edition);
}
