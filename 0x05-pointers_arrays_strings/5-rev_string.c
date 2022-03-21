#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0, j = 0, length = 0;

	while (*(s + length))
	length++;	

	char str[length];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
