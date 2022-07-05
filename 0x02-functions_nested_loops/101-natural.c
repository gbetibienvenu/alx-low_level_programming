#include "main.h"
#include <stdio.h>
/**
*main - print sum of all multiples of 3 and 5 up to 1024
*@void: Empty parameter list for main
*Description: out print the num of all multiples of 3 and 5
*Return: always a 0
*/
int main(void)
{
	int num, a;

	num = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			num += a;
		}
	}
	printf("%d\n", num);
	return (0);
}
