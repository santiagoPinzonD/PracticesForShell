#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char *cadena = NULL;
	size_t n_bytes = 0;
	char *token;
	int x = 0;
	char *aux[5];
	int count;

	printf("$ ");
	getline(&cadena, &n_bytes, stdin);
	aux[0] = strtok(cadena, " ");

	while (aux[x] != NULL) 
	{
		count = 0;
		while (aux[x][count] != '\0')
		{
			count++;
		}
		printf("normal token : %s count = %d\n", aux[x], count);
		x++;
		aux[x] = strtok(NULL, " ");
	}

	return (0);
}
