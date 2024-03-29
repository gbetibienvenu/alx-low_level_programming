#include "main.h"

/**
 * _realloc - Entry point
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated ptr
 * @new_size: size of new memory block
 * Return: a pointer to an array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array = NULL;
	char *p = NULL;
	unsigned int l;
	char *px = NULL;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		return (array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size ==  old_size)
		return (ptr);
	p = malloc(new_size);
	if (p != NULL)
	{
		px = (char *)ptr;
		for (l = 0; l < old_size; l++)
			p[l] = px[l];
		free(ptr);
		return (p);
	}
	return (NULL);
}
