#include "main.h"

/**
 * *_strncat - concatenates two strings until at most n bytes.
 * @dest: string to be concatenated to.
 * @src: string to be appended.
 *
 * Return: the concatenated string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i = 0;

	while(dest[i])
	{
		i++;
		length++;
	}

	for(i = 0; i < n; i++)
	{
		dest[length] = src[i];
		length++;
	}

	return(dest);
}


