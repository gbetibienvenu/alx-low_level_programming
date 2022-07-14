#include "main.h"

/**
 * reverse_array - reverse the content of an array of int
 * @a: array
 * @n: elements of array
 * Return: nothings always
 */
void reverse_array(int *a, int n)
{
	int l, j, k;

	for (l = 0; l < n - 1; l++)
	{
		for (j = l + 1; j > 0; j--)
		{
			k = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = k;
		}
	}
}
