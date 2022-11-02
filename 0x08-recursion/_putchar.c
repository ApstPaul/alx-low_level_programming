#include <unistd.h>

/**
 * _putchar - wtites the character c to stdout
 * @c: char to be printed
 *
 * Return: 1 on succcess.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
