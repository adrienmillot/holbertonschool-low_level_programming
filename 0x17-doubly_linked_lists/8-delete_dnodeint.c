#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 *			     linked list
 *
 * @head: first element
 * @index: element's number
 *
 * Return: error code
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *before, *after, *current, *first;
	int length;

	first = *head;

	if (first == NULL)
		return (-1);

	length = listint_len(*head);

	if (length == 0 || index > (unsigned int) length - 1)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(first);
		return (1);
	}

	before = get_nodeint_at_index(first, index - 1);
	if (index == (unsigned int) length - 1)
		after = NULL;
	else
		after = get_nodeint_at_index(first, index + 1);

	current = get_nodeint_at_index(first, index);
	before->next = after;

	if (after != NULL)
		after->prev = before;
	free(current);

	return (1);
}
