#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DELIMITER " \t\n"
extern char **environ;

char *read_input(void);
char **segment_input(char *input);
int execute_command(char **command, char **argv);

char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);

void free_pointer(char *p);
void free_array(char **array);

#endif
