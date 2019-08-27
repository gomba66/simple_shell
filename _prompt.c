#include "holberton.h"
/**
 * _prompt - Function that receive a string from the standart input
 * Return: -1 if fail or a string on success
 */
char *_prompt()
{
	char *b = NULL;
	size_t bufsize = 0;
	ssize_t count = 0;

	_printstring("\x1B[32m");
	_printstring("$ ");
	_printstring("\x1B[0m");
	count = getline(&b, &bufsize, stdin);
	if (count == -1)
	{
		perror("Error al intentar recibir el string");
		exit(1);
	}
	if (count == 1 || b[0] == ' ')
	{
		b = NULL;
		return (b);
	}

	if (b[0] == 'e' && b[1] == 'x' && b[2] == 'i' && b[3] == 't' && b[4] == '\n')
	{
		free(b);
		exit(0);
	}

	return (b);
}
