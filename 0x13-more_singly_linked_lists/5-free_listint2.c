#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to pointer to head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (head == NULL || *head == NULL)
		return;

	curr = *head;
	while ((temp = curr) != NULL)
	{
		curr = curr->next;
		free(temp);
	}

	*head = NULL;
}
