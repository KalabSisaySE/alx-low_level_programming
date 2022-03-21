#include "main.h"

/*
 * swap_int - swaps the values of int a and int  
 * @a: pointer to the first integer to be swapped
 * @b: pointer to the second pointer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
