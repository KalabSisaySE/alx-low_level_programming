#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to be searched.
 * @size: size of the array
 * @cmp: the function that will be used.
 *
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int index = 0;

	if(size <= 0)
		return -1;

	while(i < size)
	{

		if(cmp(array[i]) == 1)
			return index;

		i++;
		index++;
	}

	return -1;
}


	
