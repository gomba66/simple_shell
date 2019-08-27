#include "holberton.h"
/**
 * main - Entry point
 * This is a Super Simple Shell
 * Return: 0 on success.
 */
int main()
{
	char *a = NULL;
	char **b = NULL;
	int i, count = 0;


	while(1)
	{
		count++;
		a = _prompt();
		if (a != NULL)
		{
			b = _strtok(a);
			_execv(b, count);
		}
	}
	return (0);
}
