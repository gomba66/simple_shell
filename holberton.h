#ifndef SHELL
#define SHELL
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
void salto(int x);
char *_prompt(char **envp);
void _printchar(char c);
void _printstring(char *color);
char **_strtok(char *buffer);
void _execv(char **token, char **tokpath, char **envp);
char *_strncat(char *dest, char *src, int n);
int _strlen(const char *str);
int _strcmp(char *s1, char *s2, size_t bytes);
char *_searchpath(char **envi);
char **_tokpath(char *string);
char **_concat(char *command, char **path);
#endif
