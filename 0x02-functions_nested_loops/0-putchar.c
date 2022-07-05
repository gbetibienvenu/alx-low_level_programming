#include "main.h"
/**
*Main - Entry point
*Description: Print _putchar and a newline
*Return:  always 0
*/
int main(void)
{
	char bien[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		_putchar(bien[i]);
	}
	_putchar('\n');
	return (0);
}
