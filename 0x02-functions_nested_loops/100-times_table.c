#include "main.h"
/**
*print_times_table - print times table up to input
*Description: Writes times table up to imput not exceeding 15
*@n: the table zise
*Return: void
*/
void print_times_table(int n)
{
	int y, z, prod;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (z = 0; z <= n; z++)
			{
				prod = (y * z);
				if (z != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (prod < 10 && z != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 100 && z != 0)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar((prod % 10) + '0');
				}
				else
					_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
