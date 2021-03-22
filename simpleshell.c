#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdarg.h>

int main(void)
{
	char *cadena = NULL;
	size_t n_bytes = 0;
	char *token;
	int x;
	char *aux;
	char *path[3];
	pid_t child;

	while (1)
	{
		/*child = fork();*/
		/*if (child == 0)*/
		/*{*/
			printf("$ ");
			getline(&cadena, &n_bytes, stdin);
			// printf("",);
			for (x = 0; cadena[x] != '\n'; x++)
			{

			}
			cadena[x] = '\0';
			path[0] = cadena;
			path[1] = NULL;
			
			execvp(cadena, path);
		/*}*/
		/*else*/
		wait(NULL);
	}
	return (0);
}
