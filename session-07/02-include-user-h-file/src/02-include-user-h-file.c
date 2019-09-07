#include <stdio.h>
// #include <islam.h> // it will search for islam.h in the system includes

/* it will search first in the current directory that has the .c file in it,
 *  and if it didn't find it it will go and search for the system includes */

#include "inc/islam.h"

/*
 * .. means (up)
 */


int main(void) {
	printf("%s\n", ISLAM);
	printf("Age : %d", ISLAM_AGE);
	return 0;
}



