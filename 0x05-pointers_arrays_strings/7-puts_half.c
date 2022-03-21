#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line.
 * @str: the string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, length = 0;

	while (*(str + length))
		length++;

	--length;


	for(i = 0; i < length; i++)
		_putchar(*(str + length));

	_putchar('\n');
}

