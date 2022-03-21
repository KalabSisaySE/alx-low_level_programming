#include "main.h"

/**
 * puts2 - prints every other character of a string starting with
 * 	   first character followed by a new line.
 * @str: the string to be printed.
 *
 * Return: void.
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		_putchar('\n');
	}
}
