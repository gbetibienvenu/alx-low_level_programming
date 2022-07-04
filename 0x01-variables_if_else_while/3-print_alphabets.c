#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main- entry point
*Description: Alphabets
*Return: 0
*/
int main(void)
{
	char alphabeter = 'a';

	while (alphabeter <= 'z')
	{
		putchar(alphabeter);
		alphabeter++;
	}

	alphabeter = 'A';

	while (alphabeter <= 'Z')
	{
		putchar(alphabeter);
		alphabeter++;
	}
	putchar('\n');
	return (0);
}
