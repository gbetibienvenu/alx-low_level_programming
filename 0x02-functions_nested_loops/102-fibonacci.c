#include "main.h"
#include <stdio.h>
/**
*main - print the first 50 fibonacci numbers
*Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
*Return: always 0
*/
int main(void)
{
	int count;

	unsigned long a, b, c;

	a = 0;
	y = 1;
	for (count = 1; count <= 49; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	printf("%lu\n", c  + a);
	return (0);
}
