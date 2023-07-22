#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list
 * of integers in ascending order
 *
 * @list: the list of linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *nex, *pre;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
	{
		return;
	}
	curr = (*list)->next;
	while (curr)
	{
		nex = curr->next;
		while (curr->prev && curr->n < curr->prev->n)
		{
			pre = curr->prev;
			if (curr->next)
				curr->next->prev = pre;

			pre->next = curr->next;
			curr->prev = pre->prev;
			pre->prev = curr;
			curr->next = pre;

			if (curr->prev)
				curr->prev->next = curr;
			else
				(*list) = curr;

			print_list(*list);
		}
		curr = nex;
	}
}
