#include "holberton.h"
/**
 * _prompt - Function that receive a string from the standart input
 * @envp: enviroment.
 * Return: -1 if fail or a string on success
 */
char *_prompt(char **envp)
{
	char *b = NULL;
	size_t bufsize = 0;
	ssize_t count = 0;
	int i = 0;

	_printstring("$ ");

	count = getline(&b, &bufsize, stdin);
	if (count == -1)
	{
		exit(1);
	}
	if (count == 1 || (b[0] == ' ' && b[1] == '\n'))
	{
		b = NULL;
		return (b);
	}
	if (b[0] == 'e' && b[1] == 'n' && b[2] == 'v' && b[3] == '\n')
	{
		while (envp[i])
		{
			_printstring(envp[i]);
			_printstring("\n");
			i++;
		}
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
