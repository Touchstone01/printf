#include "main.h"

/**
 * _strlen - Prints the length of a string.
 *
 * @s: string string parameter
 *
 * Return: Returns the length of string
 *
 */

int _strlen(char *s)
{
	int c = 0;

	if (*s == '\0')
		return (0);
	c = 1 + _strlen_recursion(s + 1);
	return (c);
}
