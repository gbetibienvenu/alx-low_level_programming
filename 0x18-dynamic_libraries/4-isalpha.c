#include "main.h"

/**
 * _isalpha - Check for alphabet character also
 *
 * @c: ASCII code
 *
 * Return: Always 1 for letter, 0 and for the rest of them
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
