#include "holberton.h"

int main(void)
{
	char *path = getenv("PATH");
	int x = 0;
	char *token;
	list_t *list = NULL;

	token = strtok(path, ":");

	while (token != NULL)
	{
		printf("%s\n", token);
		auxiliar(token, &list);
		token = strtok(NULL, ":");
		x++;
	}
	printf("--------------------------------------------------------------------------------------\n");
	print_list(list);
	return (0);
}
int auxiliar(char *token, list_t **list)
{
	list_t *newnodo = malloc(sizeof(list_t));
	int x = 0;
	list_t *aux = *list;
	if (*list == NULL)
	{
		*list = newnodo;
		newnodo->directorios = token;
		newnodo->next = NULL;
		return (0);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
		x++;
	}
	newnodo->directorios = token;
	newnodo->next = NULL;
	aux->next = newnodo;
	return (0);
}
