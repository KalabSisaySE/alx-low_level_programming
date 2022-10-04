#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search for a value in an array
 * @array: The array to be searched
 * @size: Size of the array
 * @value: The value to be searched for
 *
 * Return: index of the value if the value exists otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t i = 0;
		int block = (int)sqrt(size);

		for (i = 0; i < size + block; i += block)
		{
			if (*(array + i) < value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
			}
			else
			{
				size_t j;
				size_t last;

				printf("Value found between indexes [%ld] and [%ld]\n", i - block, i);

				if (i >= size)
					last = size - 1;
				else
					last = i;

				for (j = i - block; j <= last; j++)
				{
					printf("Value checked array[%ld] = [%d]\n", j, *(array + j));
					if (*(array + j) == value)
						return (j);
				}
				return (-1);
			}
		}
	}
	return (-1);
}
