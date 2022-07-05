#include "main.h"
/**
*print_alphabet_x10 - prints 10 different  alphabet, in lowercase at as the results
*/
void print_alphabet_x10(void)
{
	int count;

	char j;

	for (count = 1; count <= 10; count++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
