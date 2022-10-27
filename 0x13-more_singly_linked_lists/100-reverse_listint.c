#include "lists.h"
/**
<<<<<<< HEAD
 * @print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to structure
 * Return: size_t
=======
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to structure
 * Return: listint_t
>>>>>>> a87248995c5dbff646e6b728cd2740237e831a97
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

<<<<<<< HEAD
	while (*head != NULL)
=======
	while (head != NULL)
>>>>>>> a87248995c5dbff646e6b728cd2740237e831a97
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;
	return (*head);
<<<<<<< HEAD
}
=======
}

>>>>>>> a87248995c5dbff646e6b728cd2740237e831a97
