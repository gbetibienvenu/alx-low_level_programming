#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*Descirption: Last digits
*Return: always 0 (success)
*/
int main(void)
{
	int n;
	int v;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	printf("Last digit of %d is %d ", n, v);
	if (v  > 5)
	{
		printf("and is greater than 5");
	}
	if (v == 0)
	{
		printf("and is 0");
	}
	if (v < 6 && v != 0)
	{
	printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
