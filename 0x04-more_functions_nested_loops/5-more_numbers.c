#include "main.h"

/*
 * more_numbers - prints the numbers 0 to 14
 * 		  10 times followed by a new line.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
