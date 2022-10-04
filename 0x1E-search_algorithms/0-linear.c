#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Search for a value in an array
 * @array: The array to be searched
 * @size: Size of the array
 * @value: The value to be searched for
 *
 * Return: index of the value if the value exists otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t i;

		for (i = 0; i < size; ++i)
		{
			printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
			if (*(array + i) == value)
				return (i);
		}
	}

	return (-1);
}
