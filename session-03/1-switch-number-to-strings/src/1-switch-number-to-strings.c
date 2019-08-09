/*
 ============================================================================
 Name        : 1-switch-number-to-strings.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define ONE 1
#define TWO 2
#define THREE 3
int main(void) {
	int x = 0;
	scanf("%d", &x);

	switch(x)
	{
	case 0:
		printf("zero\n");
		break;
	case 1:
		printf("one\n");
		break;
	case TWO:
		printf("two\n");
		break;
	case THREE:
		printf("three\n");
		break;
	case 4:
		printf("four\n");
		break;
	case 5:
		printf("five\n");
		break;
	case 6:
		printf("six\n");
		break;
	case 7:
		printf("seven\n");
		break;
	case 8:
		printf("eight\n");
		break;

	default:
		printf("number is larger than 9\n");
		break;
	case 9:
			printf("nine\n");
			break;
	}

	return 0;
}
