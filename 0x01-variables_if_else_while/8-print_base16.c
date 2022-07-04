/*
 * File: 8-print_base16.c
 * Auth: Beienvenu G
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 success
 */
int main(void)
{
	int sum;
	char alphabe;

	for (sum = 0; sum < 10; sum++)
		putchar((sum % 10) + '0');

	for (alphabe = 'a'; alphabe <= 'f'; alphabe++)
		putchar(aphabe);

	putchar('\n');

	return (0);
}
