#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @head: pointer to structure
 * @index: index of node
 * Return: size_t
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