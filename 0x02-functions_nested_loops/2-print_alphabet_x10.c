#include "main.h"
/**
*print_alphabet_x10 - prints 10 different  alphabet, in lowercase at as the results
*always print something out
*/
void print_alphabet_x10(void)
{
	int count;

	char i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
