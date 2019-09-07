#include <stdio.h>

/* Here I am checking the verison of the GCC compiler */
#if (__GNUC__ < 6)
#error "This compiler is outdated please update.";
#endif

void print_line();

int main() {
	/* Printing the current file name */
	printf("%s\n", __FILE__);

	/* Printing the current file line number */
	printf("%d\n", __LINE__);

	/* Printing the last compilation date */
	printf("%s\n", __DATE__);

	/* Printing the last compilation time */
	printf("%s\n", __TIME__);

	/* Printing the version of the GCC compiler */
	printf("%d.%d.%d\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
	print_line();
}

void print_line()
{
 	/* Printing the function name (print_line) */
	printf("function name : %s\n", __FUNCTION__);
	printf("line 1");
}
