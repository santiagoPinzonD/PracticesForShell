#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	//pid_t father;
	pid_t child;
	int x = 0;
	char *argv[] = {"/bin/ls", "-la", "/tmp/", NULL};

	while (x < 5)
	{
		child = fork();
		if (child == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child == 0)
		{
			execve(argv[0], argv, NULL);
			printf("%u\n", getppid());
			exit (0);
		}
		else
		{
			wait(NULL);
			printf("%u\n", getpid());
		}
		x++;
	}
	return (0);
}
