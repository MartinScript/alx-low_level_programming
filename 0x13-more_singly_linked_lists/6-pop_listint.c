#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of
 *		 a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to structure
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *ptr_saved;
	int n;

	if (head == NULL)
		return (0);
	else
	{
		ptr = *head;
		ptr_saved = ptr->next;
		n = ptr->n;
		free(ptr);
		*head = ptr_saved;
		return (n);
	}
}

