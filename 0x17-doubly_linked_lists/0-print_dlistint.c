#include "lists.h"

/**
 * print_dlistint- print integer of d dlistint_t
 * @h: head of d list
 * Return: Always 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *elo = h;
	size_t count = 0;


	if (elo == NULL)
		return (count);

	while (elo->prev != NULL)
		elo = elo->prev;

	while (elo != NULL)
	{
		printf("%d\n", elo->n);
		count++;
		elo = elo->next;
	}
	return (count);

}
