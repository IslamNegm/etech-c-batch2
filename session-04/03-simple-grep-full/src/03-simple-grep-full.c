#include <stdio.h>
int strindex(char str[], char ptr[]);
int strlen(char str[]);
int get_line_from_file(FILE * file, char s[], int lim);

int main(void) {
	FILE * file = fopen("test.txt", "r");
	char line[100];
	// While there's another file
	while(get_line_from_file(file, line, 100) != -1)
	{
		// If the file contains the pattern
		if(strindex(line, "etech") >= 0)
		{
			// Print it
			printf("%s\n", line);
		}
	}
	return 0;
}



















int strindex(char str[], char ptr[])
{
  int i =0;
  int j =0;

  while(str[i] != '\0')
  {
	  // Checking the matching characters
	  while(ptr[j] == str[i] && ptr[j] != '\0' && str[i] != '\0')
	  {
		  i++;
		  j++;
	  }
	  // Check if matching
	  if (j == strlen(ptr))
	  {
		  return i - strlen(ptr);
	  }
	  // Update
	  i++;
  }
  return -1;
}

int strlen(char str[])
{
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
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
	// issue : EOF at the end of non-empty line i=-1 (wrong)
	// Fix : EOF is returned by getc() even after an error in reading, meaning i==0 this will fix the problem
	// If c == EOF and the line is empty
	if(c == EOF && i==0)
	{
		i = -1;
	}
	return i;
}
