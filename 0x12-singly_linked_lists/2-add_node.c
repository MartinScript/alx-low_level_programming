#include "lists.h"
#include <string.h>
/**
 * @add_node
 *
 * @param head
 * @param str
 * @return list_t*
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	ptr = malloc(sizeof(list_t));
	if (head == NULL || (*head)->str == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->next = *head;
	ptr->len = strlen(str);
	*head = ptr;
	return (head);
}