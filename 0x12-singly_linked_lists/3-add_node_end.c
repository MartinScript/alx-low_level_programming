#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _const_strlen - Measures a string of chars.
 * @string: Pointer to string.
 *
 * Return: Number of chars.
 */

int _const_strlen(const char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Address of struct.
 * @str: Literal string passed in.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *new, *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	length = _const_strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	new->len = length;

	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
