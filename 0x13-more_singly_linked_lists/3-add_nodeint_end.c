#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to structure
 * @n: number
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
		{
		}
		ptr->next = new;
	}
	return (new);
}

