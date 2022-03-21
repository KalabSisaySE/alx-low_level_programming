#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string we want to find length of
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;

	return (length);
}
