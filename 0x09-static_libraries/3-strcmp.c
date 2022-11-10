#include "main.h"

/**
 * _strcmp - compress pointers to two string.
 * @s1: a pointer to the first string to be cpmpared
 * @s2: a pointer to the seconfd to be compared
 * Return: if str1 < str2, the negative difference of the first unmatched charactersif s1 == s2, 0.
 * if s1 > s2, the positive diff of the first unmatched char.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
