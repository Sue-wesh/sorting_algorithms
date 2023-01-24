#include "sort.h"

/**
 * swapNodes - swap the first two elements of a doubly list
 * @h: pointer to the head of doubly list
 * @a: pointer to first node to swap
 * @b: second node go swap
 */
void swapNodes(listint_t **h, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*h = b;
	(*a)->prev = b;
	*a = b->prev;
}

/**
 * insertion_sort_list - sort doubly linked list in ascending order
 * using insertion sort
 * @list: pointer to the head of a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *second, *first, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (second = (*list)->next; second != NULL; second = tmp)
	{
		tmp = second->next;
		first = second->prev;
		while (first != NULL && second->n < first->n)
		{
			swapNodes(list, &first, second);
			print_list((const listint_t *)*list);
		}
	}
}
