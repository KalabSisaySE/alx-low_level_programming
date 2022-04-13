#include "function_pointers.h"

/**
 * array_iterator - uses the function argument on each element of an array.
 * @array: the array to be iterated.
 * @size: size of the array
 * @action: the function that will be used.
 *
 * Return: void.
 */ 

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int signedInt = (int) size;

	while(i < signedInt)
	{
		action(array[i]);
		i++;
	}
}

