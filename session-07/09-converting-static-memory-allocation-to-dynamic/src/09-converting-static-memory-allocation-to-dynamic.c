#include <stdio.h>
#include <stdlib.h>

int * price_of_books = NULL;
int * percentage_of_discount = NULL;

void print_discount_info(int price[], int discount[], int size);

int main(void) {
	int num_of_books = 0;
	printf("Enter the number of books:");
	scanf("%d", &num_of_books);

	price_of_books = calloc(num_of_books, sizeof(int));
	percentage_of_discount = calloc(num_of_books, sizeof(int));

	for(int i=0; i<num_of_books; i++)
	{
		scanf("%d %d", &price_of_books[i], &percentage_of_discount[i]);
	}

	print_discount_info(price_of_books, percentage_of_discount, num_of_books);

	return 0;
}

void print_discount_info(int price[], int discount[], int size)
{
	float total_price=0, total_discount=0;
	for(int i=0; i<size; i++)
	{
		total_price += price[i];
		total_discount += (float) price[i] * (float) discount[i] / 100.0;
	}
	printf("Total Price: %.2f, Total discount:%.2f, To be paid: %.2f"
			,total_price, total_discount, total_price - total_discount);
}
