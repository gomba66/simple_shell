#include "holberton.h"
/**
 * _prompt - Function that receive a string from the standart input
 * Return: -1 if fail or a string on success
 */
char *_prompt()
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t count = 0;

	write(STDOUT_FILENO, "$ ", 2);
	count = getline(&buffer, &bufsize, stdin);
	if (count == -1)
		perror("Error al intentar recibir el string");
	if (count == 1 || buffer[0] == ' ')
	{
		buffer = NULL;
		return buffer;
	}
	if (buffer[0] == 'e' && buffer[1] == 'x' && buffer[2] == 'i' && buffer[3] == 't' && buffer[4] == '\n')
	{
		exit(0);
	}

	return (buffer);
}
