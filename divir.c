#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdarg.h>

/**
* _split - Entry point.
*@av: pointer value
* Return: Always 0 (Success)
*/
char _split(char *av)
{
	int i;
	char *tok = NULL;
	char *buffer = NULL;
	size_t size = 0;
	char array = NULL;

	buffer = malloc(sizeof(char) * strlen(av) + 1);
	if (!buffer)
		return (NULL);
	strcpy(buffer, av);
	tok = strtok(av, " ");
	while (tok)
	{
		size++;
		tok = strtok(NULL, " ");
	}
	array = calloc(sizeof(char *), size + 1);
	if (!array)
	{
		free(buffer);
		return (NULL);
	}
	tok = strtok(buffer, " ");
	size = 0;
	while (tok)
	{
		array[size] = malloc(sizeof(char) * strlen(tok) + 1);
		if (!array[size])
		{
			for (i = 0; array[size]; i++)
				free(array[size]);
			free(array);
			free(buffer);
			return(NULL);
		}
		strcpy(array[size], tok);
		size++;
		tok = strtok(NULL, " ");
	}
	free(buffer);
	return (array);
}
