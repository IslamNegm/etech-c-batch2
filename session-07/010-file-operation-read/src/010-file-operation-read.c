#include <stdio.h>
#include <stdlib.h>

char * hello_string = "Hello world written in a file\n";


int str_len(char * str)
{
	int len = 0;
	while(str[len] != '\0')
		len++;
	return len;
}

int main(void) {
	FILE *file_ptr;
	char buff[255];
	file_ptr = fopen("islam.txt", "r"); // Create new file if didn't exist in writin mode.

	if(file_ptr != NULL)
	{
		memset(buff, 0, 255);
		fscanf(file_ptr, "%s", buff);
		printf("1 : %s\n", buff );

//		fgets(buff, 255, (FILE*)file_ptr); // break at new lines
//		printf("2: %s\n", buff);
//
//		fgets(buff, 255, (FILE*)file_ptr);
//		printf("3: %s\n", buff);

		memset(buff, 0, 255);
		fread(buff, sizeof(char), 255, file_ptr);
		printf("4:fread: %s\n", buff);

		fclose(file_ptr);
	}
	else
	{
		/* file_ptr = NULL */
		printf("ERROR: cannot open the file\n");
	}


	return 0;
}


