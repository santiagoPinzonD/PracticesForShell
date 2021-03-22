#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

typedef struct list
{
	char *directorios;
	struct list *next;	
} list_t;

size_t print_list(const list_t *h);
int auxiliar(char *token, list_t **list);

#endif
