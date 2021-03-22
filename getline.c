#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char *cadena = NULL;
	size_t n_bytes = 0;
	char *token;
	int x;
	char *aux;
	
	printf("$ ");
	getline(&cadena, &n_bytes, stdin);
	printf("%s", cadena);
	return (0);
}
