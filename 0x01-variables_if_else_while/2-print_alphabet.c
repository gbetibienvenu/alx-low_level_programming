#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main- entry point
*Description: Alphabets letter
*Return: 0
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
