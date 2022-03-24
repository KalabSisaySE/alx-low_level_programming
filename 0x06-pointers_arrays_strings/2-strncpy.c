#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: the string to be copied to.
 * @src: the string to be copied.
 * @n: the maximmum number of bytes copied from src.
 *
 * Return: pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	
	while (i < n)
		dest[i++] = '\0';
	
	return (dest);
}
