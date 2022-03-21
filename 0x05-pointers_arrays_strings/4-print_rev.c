#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: the string to be printed.
 *
 * Retrurn: void.
 */

void print_rev(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;
	--length;
	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}

	_putchar('\n');
}
