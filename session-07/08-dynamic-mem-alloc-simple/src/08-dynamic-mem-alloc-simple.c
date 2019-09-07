#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num_of_elements = 0;
	scanf("%d", &num_of_elements);
//	int * ptrarr = malloc(num_of_elements * sizeof(int));
	int * ptrarr = calloc(num_of_elements, sizeof(int));
//	int ptrarr[100];

	/* Writing the data */
	for(int i=0; i<num_of_elements; i++)
	{
		ptrarr[i] = i;
	}


	num_of_elements = 200;
	// Force the block size to be reallocated with 200 elements of ints
	ptrarr = realloc(ptrarr, num_of_elements * sizeof(int));


	/* Reading the data */
	for(int i=0; i<num_of_elements; i++)
	{
		printf("ptrarr[%d] = %d\n",i ,ptrarr[i]);
	}


	/* freeing */
	printf("Before freeing : ptrarr = %p\n", ptrarr);
	free(ptrarr);
	printf("After freeing : ptrarr = %p\n", ptrarr);
	ptrarr = NULL;
	printf("After Nulling : ptrarr = %p\n", ptrarr);
	return 0;
}

