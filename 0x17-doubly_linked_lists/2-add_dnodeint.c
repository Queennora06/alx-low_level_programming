#include "lists.h"

/**
 * add_dnodeint- Adds node in d list
 * @head: head of d list
 * @n: position of node
 * Return: Always 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *elo;
	dlistint_t *h = *head;

	elo = malloc(sizeof(dlistint_t));
	if (elo == NULL)
	{
		return (NULL);
	}
	elo->n = n;
	elo->prev = NULL;

	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	elo->next = h;

	if (h != NULL)
	{
		h->prev = elo;
	}
	*head = elo;
	return (elo);
}
