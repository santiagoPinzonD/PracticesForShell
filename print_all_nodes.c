#include "holberton.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h:linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	char *string;

	if (h == NULL)
		return (0);
	string = h->directorios;
	if (string == NULL)
		printf("[0] (nil)\n");
	else
		printf("%s\n", string);
	return (1 + print_list(h->next));
}
