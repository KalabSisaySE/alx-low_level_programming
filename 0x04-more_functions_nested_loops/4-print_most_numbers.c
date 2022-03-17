#include "main.h"

/*
 * print_most_numbers - print numbers from 0 to 9
 * 			escapes 2 and 4.
 *
 * Return : Always 0.
 */

void print_most_numbers(void)
{
	int numb;

	for (numb = 48 ; numb <= 57 ; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
