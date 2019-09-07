#include <stdio.h>

#define PCHAR unsigned char *
typedef unsigned char * pchar;


int main(void) {
	PCHAR x, y;
	/* Same as :
	 * unsigned char *x;
	 * unsgined char y;
	 */
	printf("sizeof(x):%d, sizeof(y):%d\n", sizeof(x), sizeof(y));

	pchar a, b;
	/*
	 * Typedef is better in handling multiple definition for pointer based variables
	 */
	printf("sizeof(a):%d, sizeof(b):%d\n", sizeof(a), sizeof(b));
	return 0;
}
