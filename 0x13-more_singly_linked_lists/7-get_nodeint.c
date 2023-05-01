#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Head of the list.
 * @index: Index of the node.
 *
 * Return: The nth node. If the node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

