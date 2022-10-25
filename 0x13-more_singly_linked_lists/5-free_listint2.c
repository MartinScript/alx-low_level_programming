#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to structure
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr_saved;

	if (*head == NULL)
		free(head);
	else
	{
		while (*head != NULL;)
		{
			ptr = (*head)->next;
			free(ptr);
			head = NULL;
		}
	}
}

