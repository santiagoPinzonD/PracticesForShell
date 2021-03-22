#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

// imprime solamente cada dirreccion del path separados por dos puntos
int main(void)
{
	char *path = getenv("PATH");	
	int x = 0;
	char *token;

	token = strtok(path, ":");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
		x++;
	}
	return (0);
}
