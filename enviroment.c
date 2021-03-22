#include <unistd.h>
#include <stdio.h>

extern char **environ;

int main(int ac, char *av[], char **env)
{
	printf("Environ: %p\n", environ);
	printf("Env:     %p\n", env);
	return (0);
}
