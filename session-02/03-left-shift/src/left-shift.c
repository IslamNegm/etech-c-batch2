/*
 ============================================================================
 Name        : left-shift.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	int val = 0;
	int num_of_shifts = 0;

	printf("Please enter the value that you want to shift:\n");
	scanf("%d", &val);

	printf("Please enter number of shifts:\n");
	scanf("%d", &num_of_shifts);

	printf("New value: %d\n",(val << num_of_shifts));
	return 0;
}
