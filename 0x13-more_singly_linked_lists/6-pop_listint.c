#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node;
	listint_t *curr_node;

	if (*head == NULL)
		return (0);

	curr_node = *head;
	data = curr_node->n;
	next_node = curr_node->next;

	free(curr_node);
	*head = next_node;

	return (data);
}
