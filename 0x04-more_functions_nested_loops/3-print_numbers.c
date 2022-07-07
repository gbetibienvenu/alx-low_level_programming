/*
 * File: 3-print_numbers.c
 * Auth: Binvenu G.
 */

#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int sum;

	for (sum = 0; sum <= 9; sum++)
		_putchar((sum % 10) + '0');

	_putchar('\n');
}
