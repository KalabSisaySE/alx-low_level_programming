#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - Searchs for a value in an array using interpolation
 * @array: The array to search in
 * @size: Size of the array
 * @value: The value to be searched for
 *
 * Return: index of the value if the value exists otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t mid;
	double range;

	while ((array[low] != array[high]))
	{
		range = high - low;
		mid = low + (range / (array[high] - array[low])) * (value - array[low]);

		if (mid >= size)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (value > array[mid])
			low += 1;
		else if (value < array[mid])
			high -= 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
