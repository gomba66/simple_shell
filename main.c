#include "holberton.h"
/**
 * main - Entry point
 * @ac: argument counter
 * @av: argument vectors
 * @envp: enviroment
 * Return: 0 on success.
 */
int main(int ac, char *av[], char *envp[])
{
	char *a = NULL;
	char **b = NULL;
	char *string = NULL;
	char **tokenpath = NULL;
	int  count = 0;
	char **c = NULL;
	int end = 0;
	(void)ac;

	signal(SIGINT, salto);

	string = _searchpath(envp);
	if (string == NULL)
	{
		perror("Path not found");
	}
	tokenpath = _tokpath(string);

	while (end != EOF)
	{
		count++;
		a = _prompt(envp);
		if (a != NULL)
		{
			b = _strtok(a);
			c = _concat(a, tokenpath);
			_execv(b, count, c, av);
		}

	}
	return (0);
}
