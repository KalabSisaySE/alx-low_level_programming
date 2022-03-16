#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *              
 * Return: Always 0.
 */
void times_table(void)
{
	int first_number = 0;
	int second_number;

	while(first_number <= 9)
	{
		second_number = 0;
		
		while(second_number <= 9)
		{
			int product = first_number * second_number;

			_putchar(product);
			if(first_number > 9)
				_putchar(',');
			
			_putchar(' ');
			second_number++;
		}
		
		first_number++;
		_putchar('\n');
	}
}
