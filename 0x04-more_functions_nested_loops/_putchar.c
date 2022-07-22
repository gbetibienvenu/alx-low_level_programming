#include <unistd.h>
                                                                /**
 * _putchar - writes the character c to stdout
 *@c: char to be printed
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
return (write(1, &c, 1));                
}
