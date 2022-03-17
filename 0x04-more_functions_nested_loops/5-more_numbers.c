#include "main.h"

/*
 * more_numbers - prints the numbers 0 to 14
 * 		  10 times followed by a new line.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{

	int i = 1;

	while(i <= 10)
	{
	
		int j = 0;

		for (j = 0; j < 15; j++)
		{
			_putchar(j / 10 + '0');
		}
	
	}

}
