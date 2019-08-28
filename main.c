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
	(void)ac;
	(void)av;
	char *a = NULL;
	char **b = NULL;
	char *string = NULL;
	char **tokenpath = NULL;
	int i, count = 0;

	signal(SIGINT, SIG_IGN);

	string = _searchpath(envp);
	if (string == NULL)
	{
		perror("Path not found");
	}
	tokenpath = _tokpath(string);

	while (1)
	{
		count++;
		a = _prompt();
		if (a != NULL)
		{
			b = _strtok(a);
			_execv(b, count, tokenpath);
		}
	}
	return (0);
}
