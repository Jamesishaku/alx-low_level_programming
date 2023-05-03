#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the list
 *
 * Return: Pointer to the node where the loop starts, or NULL if no loop found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = head, *hare = head;
	
	while (turtle != NULL && hare != NULL && hare->next != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		
		if (turtle == hare)
		{
			turtle = head;
		       
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			
			return (turtle);
		}
	}
	
	return (NULL);
}
