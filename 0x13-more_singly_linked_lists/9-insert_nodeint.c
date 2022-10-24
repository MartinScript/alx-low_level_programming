#include "lists.h"

/**
 * @insert_nodeint_at_index - a function that prints all the elements of a listint_t list.
 * @head: pointer to structure
 * @idx: index
 * @n: number
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr_saved, *new;
	int count = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
	{
		if (count == idx)
		{
			ptr_saved = ptr->next;
			new->next = ptr_saved;
			ptr->next = new;
			return (new);
		}
		else
			count++;
	}
	return (NULL);
}