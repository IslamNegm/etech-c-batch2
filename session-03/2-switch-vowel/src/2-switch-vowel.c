/*
 ============================================================================
 Name        : 2-switch-vowel.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char c = 0;
	scanf("%c", &c);

	switch(c)
	{
	case 'a':
		printf("char is a vowel\n");
		break;
	case 'e':
		printf("char is a vowel\n");
		break;
	case 'i':
		printf("char is a vowel\n");
		break;
	case 'o':
		printf("char is a vowel\n");
		break;
	case 'u':
		printf("char is a vowel\n");
		break;
	default:
		printf("char is not a vowel\n");
		break;
	}
	return 0;
}
