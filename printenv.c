#include <unistd.h>
#include <stdio.h>

extern char **environ;
int main (void)
{
	int x = 0;
	while (environ[x])
	{
		printf("%s\n", environ[x]);
		x++;
	}
	return (0);
}
