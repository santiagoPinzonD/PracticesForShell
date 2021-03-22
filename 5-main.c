#include "minishell.h"

int main(void)
{
	char *new;

	char *first = "Santiago";
	char *second = "pendejo";

	new = _combinestr(first, second, " = ");

	printf("%s\n", new);

	_setenv(first, second, 0);

	return (0);
}
