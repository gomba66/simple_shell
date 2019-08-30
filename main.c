#include "holberton.h"
void salto(int x);
/**
 * salto - Function that detect Ctr + C and print a new line
 * @x: nothing.
 * Return: nothing.
 */
void salto(int x)
{
	(void)x;
	_printstring("\n$ ");
}

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
	char **c = NULL;
	(void)ac;
	(void)av;


	signal(SIGINT, salto);

	string = _searchpath(envp);
	if (string == NULL)
	{
		perror("Path not found");
	}
	tokenpath = _tokpath(string);

	while (1)
	{
		a = _prompt(envp);
		if (a != NULL)
		{
			b = _strtok(a);
			c = _concat(a, tokenpath);
			_execv(b, c, envp);
		}

	}
	return (0);
}
