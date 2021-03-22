#include "minishell.h"

extern char **environ;

int _setenv(const char *name, const char *value, int overwrite)
{
	char *valor;
	int lename, x = 0;
	char *newvar;

	if (name == NULL)
		return (-1);
	for (lename = 0; name[lename] != '\0'; lename++)
	{
		if (name[lename] == '=')
			return (-1);
	}
	if (lename == 0)
		return (-1);
	valor = _getenv(name);

	if (valor == NULL)
	{
		while (environ[x])
		{
			x++;
		}
		newvar = _combinestr(name, value, "=");
		environ[x] = newvar;
		environ[x + 1] = NULL;

		x = 0;
		while (environ[x])
		{
			printf("%s\n", environ[x]);
			x++;
		}
		return (0);
	}
	if (overwrite != 0)
	{
		_changeenv(name, value, "=");

		printf("%s\n", environ[x]);
		return (0);
	}

	printf("%s\n", environ[x]);
	return (0);

}

void _changeenv(const char *name, const char *newval, char *sep)
{
	(void)name;
	char *tok = NULL;
	int x, i = 0;
	
	
	tok = strtok(environ[i], "=");

	while (_strcmp(name, tok) && environ[i])
	{
		x = 0;
		while (environ[x])
		{
			
			printf("%s\n", environ[x]);
		}
		tok = strtok(environ[i++], "=");
		printf("------------------------------------------");
	}

	environ[i] = _combinestr(name, newval, sep);
	//tok = strtok(NULL, "\n");
	//return (tok);
}
