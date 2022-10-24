#include "lists.h"

/**
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to structure
 * Return: size_t
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr_saved, *temp;
	int count = 0;

	if (head == NULL)
		return (NULL);

	for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
	{
		if (count == index)
		{
			ptr_saved = ptr->next;
			temp = ptr;
			free(ptr);
			temp->next = ptr_saved;

			return (1);
		}
		else
			count++;
	}
	return (-1);
}