#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 * using the insertion sort algorithm.
 *
 * @list: a doubly linked list of integers
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *back = null, *now = null, *front = null;
	int flag = 1;

	if (!list)
		return;

	now = list;
	front = list->next;
	back = list->prev;
	while (flag)
	{
		flag = 0;
		while (list)
		{
			if (now->n > front->n)
			{
				now->next = front->next
				front->next = now;
				now->prev = front;
				flag = 1;
				print_list(*list);
			}
		}
	}
					


