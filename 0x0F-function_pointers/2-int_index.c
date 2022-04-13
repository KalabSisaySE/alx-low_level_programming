#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @cmp: function used to compare
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if(size <= 0)
		return (-1);


	if(array && size && cmp)
	{
		while(i < size)
		{

			if(cmp(array[i]) == 1)
				return (i);
	
			i++;
		}
	}

	return (-1);
}


	
