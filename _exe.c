#include "holberton.h"
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _execv - Function to execute a program
 * @token: string tokenized
 * @count: counter
 * @tokenpath: path tokenized
 * Return: not return on success, otherwise return -1 if fail.
 */
void _execv(char **token, int count, char **tokenpath)
{
	pid_t pid_child;
	int i = 0;


	pid_child = fork();

	if (pid_child < 0)
	{
		perror("Error fork");
		exit(1);
	}
	if (!pid_child)
	{

		while (tokenpath[i] != NULL)
		{
			printf("%s\n", tokenpath[i]);
			i++;
		}

		if (execv(token[0], token) == -1)
		{
			perror(token[0]);
			exit(1);
		}
	}
	else
		wait(NULL);
}
