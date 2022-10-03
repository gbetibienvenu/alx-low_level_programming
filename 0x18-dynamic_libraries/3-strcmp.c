#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first str
 * @s2: second str
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0, i = 0;

	while (i == 0)
	{
		if ((*(s1 + l) == '\0') && (*(s2 + l) == '\0'))
			break;
		i = *(s1 + l) - *(s2 + l);
		l++;
	}
	return (i);
}
