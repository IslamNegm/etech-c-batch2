/*
 ============================================================================
 Name        : 4-for-nested-multiplication-table.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	for(int i=2; i <= 12 ; i++)
	{
		printf("Printing the multiplication table of %d:\n", i);
		for(int j=i; j<=12; j++)
		{
			printf("%5d x %5d = %5d\n", i, j, i*j);
		}
		printf("---------------------\n");
	}

	return 0;
}
