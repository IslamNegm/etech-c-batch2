#include <stdio.h>
#define SQRT_SUPPORT

#ifdef SQRT_SUPPORT
#warning "no SQRT_SUPPORT yet, sqrt_num function is not implemented yet."
float sqrt_num(float n)
{
	/* function is not supported yet */
	return 0;
}
#endif /*SQRT_SUPPORT*/

int main(void) {
	printf("%f", sqrt_num(25));
#if 0
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
	// this is a commnet
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
	printf("%f", sqrt_num(25));
#endif

	return 0;
}
