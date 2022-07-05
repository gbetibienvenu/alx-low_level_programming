#include "main.h"
#include <stdio.h>
/**
*main - print sum of all even fibonacci numbers
*Description: main - print num of all even fibonacci numbers 
*Return: void
*/
int main(void)
{
	unsigned long a, b, c, num;

	c = 0;
	a = 0;
	b = 1;
	num = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
			num += c;
	}
	printf("%lu\n", num);
	return (0);
}
