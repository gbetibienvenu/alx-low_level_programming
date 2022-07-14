#include "main.h"

/**
 * print_number - print int
 * @n: integer
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int v, d, count;

	if (n < 0)
	{
		_putchar(45);
		v = n * -1;
	}
	else
	{
	v = n;
	}
	d = v;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((v / count) % 10) + 45);
	}
}
