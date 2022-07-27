#include "main.h"
/**
 * malloc_checked - function to check
 * @b: string we need to duplicate
 * Return: a pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
