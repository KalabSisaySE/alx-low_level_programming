#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: string to be appended to.
 * @src: string to be appended.
 *
 * Return: the concatenated string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index])
	{
		index++;
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len] = src[index];
		dest_len++;
	}

	return (dest);
}
