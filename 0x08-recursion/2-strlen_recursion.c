#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string we want to find the length of.
 *
 * Return: the length of the string @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(++s) + 1);
}
