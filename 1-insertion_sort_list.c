#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: the list to be sorted
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *loop, *ptr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	ptr = (*list)->next;

	while (ptr != NULL)
	{
		curr = ptr;

		while (curr->prev != NULL && curr->n < curr->prev->n)
		{
			loop = curr->prev;

			if (curr->next != NULL)
				curr->next->prev = loop;
			loop->next = curr->next;
			curr->prev = loop->prev;
			curr->next = loop;

			if (loop->prev != NULL)
				loop->prev->next = curr;
			else
				*list = curr;
			loop->prev = curr;

			print_list(*list);

		}

		ptr = ptr->next;
	}
}
