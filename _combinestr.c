#include "minishell.h"

/**
 * _combinestr - combines 2 strings and adds the sep in the middle
 * DONE WITH MALLOC // please be aware of free later
 *
 * @first: string 1
 * @second: string 2
 * @sep: separator between strings
 *
 * Return: pointer to the new string
 */
char *_combinestr(const char *first, const char *second, char *sep)
{
	char *newstr;
	int posn, posf, poss, possep;
	int len;

	for (posf = 0; first[posf] != '\0'; posf++)
	{
	}
	for (possep = 0; sep[possep] != '\0'; possep++)
	{
	}
	for (poss = 0; second[poss] != '\0'; poss++)
	{
	}

	newstr = malloc(sizeof(char) * (posf + possep + poss + 1));
	if (newstr == NULL)
	{
		write(STDOUT_FILENO, "Error in _combinestr\n", 21);
		return (NULL);
	}

	for (len = 0, posn = 0; len < posf; len++, posn++)
	{
		newstr[posn] = first[len];
	}
	for (len = 0; len < possep; len++, posn++)
	{
		newstr[posn] = sep[len];
	}
	for (len = 0; len < poss; len++, posn++)
	{
		newstr[posn] = second[len];
	}
	newstr[posn] = '\0';
	return (newstr);
}
