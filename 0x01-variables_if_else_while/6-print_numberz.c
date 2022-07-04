/*
 * File: 6-print_numberz.c
 * Auth: Bienvenu Gbeti
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0 success
 */
int main(void)
{
	int sum;

	for (sum = 0; sum < 10; sum++)
		putchar((sum % 10) + '0');

	putchar('\n');

	return (0);
}
