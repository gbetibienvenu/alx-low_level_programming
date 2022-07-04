#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main- entry point
*Description: Alphabets
*Return: always 0
*/
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph == 'e')
		{
			alph++;
		}
		else if (alph == 'q')
		{
			alph++;
		}
		else
		{
			putchar(alph);
			alph++;
		}
	}
	putchar('\n');
	return (0);
}
