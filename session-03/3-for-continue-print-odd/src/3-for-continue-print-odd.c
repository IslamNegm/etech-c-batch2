/*
 ============================================================================
 Name        : 3-for-continue-print-odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	for(int i=0; i<=100; i++)
	{
		/* If it's even */
		if (i % 2 == 0)
		{
			/* Skip the current iteration (loop) */
			continue;
		}
		printf("%d,",i);
	}
	return 0;
}
