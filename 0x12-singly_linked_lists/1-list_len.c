#include "lists.h"

/**
 * list_len -  number of elements in a linked list
 * @h: pointer to node struct
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = NULL;
	int counter = 0;
	
	temp = malloc(sizeof(list_t));
	temp = h;
	
	while (temp != NULL)
	{
		temp  = temp->next;
		counter++;
	}
	return (counter);
}
