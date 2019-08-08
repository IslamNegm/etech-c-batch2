/*
 ============================================================================
 Name        : odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* This is the variable that will store the input from user */
	int x = 0;
	printf("Enter the number you want to check if (even/odd)\n");
	/* Scanning an integer from the user */
	scanf("%d", &x);
	if(x % 2 == 0)
	{
		/* It's even */
		printf("%d is even.", x);
	}
	else
	{
		/* It's odd*/
		printf("%d is odd.", x);
	}

	return 0;
}
