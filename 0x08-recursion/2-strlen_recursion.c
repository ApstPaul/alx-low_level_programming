#include "main.h"

/**
 * _strien_recursion - Returns the lenght of a string.
 * @s: The string to be measured. 
 * Return: The length of the string.
 */
int _strien_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strein_recursion(s + 1);
	}

	return (len);
}