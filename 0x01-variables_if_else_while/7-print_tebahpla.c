/*
 * File: 7-print_tebahpla.c
 * Auth: Bienvenu gbeti
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 success
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
