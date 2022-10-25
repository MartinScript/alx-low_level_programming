#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: pointer to structure
 * @index: index of node
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	for (ptr = head; ptr->next != NULL; ptr = ptr->next)
	{
		if (count == index)
			return (ptr);
		else
			count++;
	}
	return (NULL);
}

