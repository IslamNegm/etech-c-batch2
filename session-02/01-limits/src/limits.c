/*
 ============================================================================
 Name        : limits.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <limits.h>

int main(void) {
	/* Printing the limits for the char, int, short, long */
	// Char
	printf("Unsigned Char type, min=%d , max=%d\n",0, UCHAR_MAX);
	printf("Signed Char type , min=%d, max=%d\n",SCHAR_MIN, SCHAR_MAX);
	// Short
	printf("Unsigned short type, min=%d, max=%d\n", 0, USHRT_MAX);
	printf("Signed short type, min=%d, max=%d\n", SHRT_MIN, SHRT_MAX);
	// int
	printf("Unsigned int type, min=%d, max=%u\n", 0, UINT_MAX);
	printf("Signed int type, min=%d, max=%d\n", INT_MIN, INT_MAX);
	// long
	printf("Unsigned long type, min=%d, max=%lu\n", 0, ULONG_MAX);
	printf("Signed long type, min=%ld, max=%ld\n", LONG_MIN, LONG_MAX);

	return 0;
}
