#include "lists.h"
/**
 * print_list - prints all the elements a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t tes;
	tes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nill");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h-next;
		tes++;
	}
	return(tes);
}
