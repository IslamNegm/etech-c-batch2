/*
 ============================================================================
 Name        : set.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	/* Program :
	 * User will enter a value that will be saved in a unsigned int,
	 * then he'll enter the bit for this value to be set
	 * and will enter the bit for this value to be cleared
	 * The value will be printed after doing any operation on them
	 */
	unsigned int GPIO_reg_val;
	int bit_to_be_set;
	int bit_to_be_cleared;

	printf("Enter the GPIO register value: ");
	scanf("%d", &GPIO_reg_val);

	/* Setting the bit */
	printf("Enter the position of the bit that you want to set: ");
	scanf("%d", &bit_to_be_set);

	GPIO_reg_val |= (1 << bit_to_be_set);
	printf("Value after setting the bit position #%d = %d, and in HEX 0x%X\n", bit_to_be_set, GPIO_reg_val, GPIO_reg_val);

	/* Clearing the bit */
	printf("Enter the position of the bit that you want to clear: ");
	scanf("%d", &bit_to_be_cleared);

	GPIO_reg_val &= ~(1 << bit_to_be_cleared);
	printf("Value after clearing the bit position #%d = %d, and in HEX 0x%X\n", bit_to_be_set, GPIO_reg_val, GPIO_reg_val);


	return 0;
}
