#include "lists.h"

/**
 * dlistint_len- prints number of elements
 * @h: head of d list
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nora = h;
	size_t count = 0;

	if (nora == NULL)
		return (count);

	while (nora->prev != NULL)
		nora = nora->prev;

	while (nora != NULL)
	{
		count++;
		nora = nora->next;
	}

	return (count);
}
