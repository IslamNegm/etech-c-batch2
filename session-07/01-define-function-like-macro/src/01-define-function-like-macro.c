#include <stdio.h>

#define MAX(x,y) ((x>y) ? x : y)
/*
 * int MAX(int x, int y)
 * {
 *    return ((x>y)? x : y);
 * }
 */


int main(void) {
	printf("MAX(2,3) returns %d\n", MAX(2,3));
	return 0;
}
