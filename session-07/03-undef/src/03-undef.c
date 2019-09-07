#include <stdio.h>
#include "islam.h"

#undef ISLAM_AGE
#define ISLAM_AGE 60


int main(void) {
	printf("New Islam Age is %d", ISLAM_AGE);
	return 0;
}

