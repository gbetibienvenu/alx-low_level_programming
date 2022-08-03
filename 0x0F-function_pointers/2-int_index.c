#include "function_pointers.h"

/**
 * int_indes - searches for an integer
 * @array: input integer array
 * @size of the array
 * @cmp: pointer to the function 
 * 
 * Return: index of the first element for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (m = 0; m < size; m++)
			if (cmp(array[m]))
				return (m);
	}
	return (-1);
}
