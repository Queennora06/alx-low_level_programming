#include "lists.h"

/**
 * dlistint_len- prints number of elements
 * @h: head of d list
 * Return: Always 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *elo = h;
	size_t count = 0;

	if (elo == NULL)
		return (count);

	while (elo->prev != NULL)
		elo = elo->prev;

	while (elo != NULL)
	{
		count++;
		elo = elo->next;
	}

	return (count);
}
