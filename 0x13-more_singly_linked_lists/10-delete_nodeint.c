#include "lists.h"

/**
<<<<<<< HEAD
 * @print_listint - a function that deletes the node at index index of a listint_t linked list.
=======
 * delete_node_at_index - a function that prints all the elements of a listint_t list.
>>>>>>> a87248995c5dbff646e6b728cd2740237e831a97
 * @head: pointer to structure
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (-1);
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (-1);
	}
}

