#include "minishell.h"
/**
 * _getenv - prints the environment
 *
 * @name: int value
 *
 * Return: Always 0.
 */
extern char **environ;
char *_getenv(const char *name)
{
	(void)name;
	char *tok = NULL;
	int z, x, i = 0;
	char *token;

	tok = strtok(environ[i], "=");
	
	while (_strcmp(name, tok) && environ[i])
	{
		token = tok;
		x = 0;
		tok = strtok(NULL, "\0");
		//printf("esto es token %s\n", tok);
		//printf("esto es token %s y esto es tok %s\n", token, tok);
		environ[i] = _combinestr(token, tok, "=");
		if (!environ[i + 1])
			break;
		tok = strtok(environ[++i], "=");
	}
	/**while (environ[x])
	{
		printf("%s\n", environ[x]);
		x++;
	}
	**/
	if (environ[i] == 0)
		return (NULL);
	tok = strtok(NULL, "\n");
	return (tok);
}
