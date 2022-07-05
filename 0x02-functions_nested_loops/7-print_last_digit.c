#include "main.h"

/**
 * print_last_digit - print_last_digit
 *
 * @a: number as integer
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	int v;

	v = a % 10;

	if (v < 0)
		v = -v;
	_putchar(v + '0');
	return (v);
}
