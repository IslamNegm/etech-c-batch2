#include <stdio.h>
int strindex(char str[], char ptr[]);
int strlen(char str[]);

int main() {
  char str[] = "Hello Iman, My name is Islan";
  char ptr[] = "Islam";

  printf("position = %d", strindex(str, ptr));
  printf("position = %d", strindex("Hello Islam how are you?", "Ahmed"));

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

