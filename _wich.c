#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	struct stat st;
	char *path;
	path = getenv("PATH");
	int lent, com, x = 2;
	char *token, *newtok, *ctrlCp;

	if (ac < 3)
	{
		printf("ESTAS LOCO O QUE PERRO ARGV POCOS\n");
		return (1);
	}
	printf("av[1] = %s\n", av[1]);
	/* Comentada por ahora en lo que hacemos funcionar de momento lo demas
	   if (av[1] != "_which")
	   {
	   printf("funcion erronea xd\n");
	   return (2);
	   }*/
	token = strtok(path, ":");
	while (token != NULL)
	{
		for (lent = 0; token[lent] != '\0'; lent++)
		{
		}
		newtok = malloc(300);

		/*Verificacion de malloc*/

		ctrlCp = strcpy(newtok, token);
		if (ctrlCp == NULL)
		{
			printf("strcpy failed\n");
			return (10);
		}
		newtok[lent++] = '/';
		for (com = 0; av[2][com] != '\0'; com++)
		{
			newtok[lent + com] = av[2][com];
		}
		newtok[lent + com] = '\0';
		if (stat(newtok, &st) == 0) /*Falta concatenar el comando dado al final*/
		{
			printf("It works: %s\n", newtok);
			break;
		}
		//printf("Before strtok: %s\n", token);
		token = strtok(NULL, ":");
		//printf("Now the token is: %s\n", token);
		x++;
	}
	return (0);
}
