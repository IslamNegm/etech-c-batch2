#include <stdio.h>
#define METHOD

int get_line_from_file(FILE * file, char s[], int lim);

int main(void) {
	char s[100];
	int num_of_scanned_chars = 0;
	FILE * file = fopen("text.txt", "r");


	num_of_scanned_chars = get_line_from_file(file, s,100);
#ifdef METHOD
	while(num_of_scanned_chars != 0)
#else
	while(num_of_scanned_chars != -1)
#endif
	{
		printf("%s\n", s);
		printf("Number of chars = %d\n",num_of_scanned_chars);
		num_of_scanned_chars = get_line_from_file(file, s,100);
	}


	return 0;
}

int get_line_from_file(FILE * file, char s[], int lim)
{

	char c = getc(file);
	int i = 0;
	while(c != EOF && c != '\n')
	{
		s[i] = c;
		// Update
		// 1. Character (get next character)
		c = getc(file);
		// 2. index i
		i++;
	}
	s[i] = 0; // s[i] = '\0'; // Null character, indicates the end of the string
/*
 * Methods for printing the empty lines
 */
	/*------------ 1. return 1 if it's an empty line ------------*/
#ifdef METHOD
	if( c == '\n' && i==0 ) // Empty line
	{
		i = 1;
	}
#else
	/*------------ 2. return -1 if it's the EOF ------------*/
	// issue : EOF at the end of non-empty line i=-1 (wrong)
	// Fix : EOF is returned by getc() even after an error in reading, meaning i==0 this will fix the problem
	// If c == EOF and the line is empty
	if(c == EOF && i==0)
	{
		i = -1;
	}
#endif
	return i;
}
