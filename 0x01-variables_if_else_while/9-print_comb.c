#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main- Writes 0-9
*Description: writes 0-9 with comma and space
*Return: 0
*/
int main(void)
{
	int sum = 0;

	while (sum <= 9)
	{
		putchar(sum + '0');
		if (sum < 9)
		{
			putchar(',');
			putchar(' ');
		}
		sum++;
	}
	putchar('\n');
	return (0);
}
