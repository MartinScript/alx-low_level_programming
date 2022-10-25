#include "lists.h"

/**
 * sum_listint - function that returns the sum of the data of a linked list
 * @head: pointer to structure
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	for (ptr = head; ptr->next != NULL; ptr = ptr->next)
	{
		sum = sum + ptr->n;
	}
	sum = sum + ptr->n;
	return (sum);
}

