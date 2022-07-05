#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: nothing at the end
 */
void times_table(void)
{
	int j, k, opp;

	for (j = 0; j <= 9; j++)
	{
		_putchar(48);
		for (k = 1; k <= 9; k++)
		{
			opp = j * k;
			_putchar(44);
			_putchar(32);
			if (opp <= 9)
			{
				_putchar(32);
				_putchar(opp + 48);
			}
			else
			{
				_putchar((opp / 10) + 48);
				_putchar((opp % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
