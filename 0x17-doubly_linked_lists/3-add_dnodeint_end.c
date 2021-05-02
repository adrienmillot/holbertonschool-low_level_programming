#include "lists.h"

/**
 * _createNode - create a new node
 *
 * @prmNbr: name
 *
 * Return: new element
 */
dlistint_t *_createNode(const int prmNbr)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = prmNbr;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

/**
 * _getLastNode - get last node
 *
 * @prmHeadNode: first node
 *
 * Return: last element
 */
dlistint_t *_getLastNode(dlistint_t *prmHeadNode)
{
	if (!prmHeadNode)
		return (NULL);
	else
		return (_getLastNode(prmHeadNode->next));
}

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: first element
 * @n: number
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (head == NULL)
		return (NULL);

	new = _createNode(n);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		last = _getLastNode(*head);
		if (last == NULL)
		{
			return (NULL);
		}
		last->next = new;
		new->prev = last;
	}

	return (new);
}
