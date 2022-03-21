#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char tmp;

	while (s[index++])
		length++;

	length--;
	for (index = length; index >= length / 2; index--)
	{
		tmp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = tmp;
	}
}
