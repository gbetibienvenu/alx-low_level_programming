#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  num of the two diagonals of a square matrix of integers
 * @a: array name
 * @size: array size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int num1 = 0;
	int num2 = 0;

	while (i <= (size * size))
	{
		num1 = num1 + a[i];
		i = i + size + 1;
	}
	while (j < (size * size - 1))
	{
		num2 += a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", num1, num2);
}
