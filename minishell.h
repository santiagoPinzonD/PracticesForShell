#ifndef MINISHELL_H
#define MINISHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <stdarg.h>

char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
char *_combinestr(const char *first, const char *second, char *sep);
int _strcmp(const char *s1, const char *s2);
void _changeenv(const char *name, const char *newval, char *sep);
char *_strcpy(char *dest, char *src);

#endif
