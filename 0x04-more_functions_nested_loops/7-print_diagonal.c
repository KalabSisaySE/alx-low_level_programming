#include "main.h"
/**
 * print_diagonal -draws a diagonal line on the terminal
 * @x: the number of times that the special character must be print
 *
 * Return: nothing.
 */
void print_diagonal(int x)
{
	int i = 0;
	int j = 0;
	
	for (i=0; i < x; i++)
	{
		for (j = 0; j < x; j++)
		{

			_putchar(' ');

		}

		_putchar('\n');

	}
}
