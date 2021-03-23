#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: first element
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;

	/*if (*head == NULL)
		return (NULL);*/

	if (tmp->next == NULL)
		return (tmp);

	reverse_listint(&(tmp->next));
	printf("{current: %d, next: %d}\n", tmp->n, tmp->next->n);
	tmp->next->next = tmp;
	tmp = tmp->next;
	tmp->next = NULL;
	/*(*head)->next = NULL;*/
	printf("{current: %d}\n\n", tmp->n);

	return (tmp);
}
