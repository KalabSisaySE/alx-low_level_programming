#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to be searched.
 * @size: size of the array
 * @cmp: the function that will be used.
 *
 * Return: first index or -1
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


	
