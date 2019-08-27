#include "holberton.h"
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _execv - Function to execute a program
 * @token: string tokenized
 * Return: not return on success, otherwise return -1 if fail.
 */
void _execv(char **token, int count)
{
	pid_t pid_child;

	pid_child = fork();

	if (pid_child < 0)
	{
		perror("Error fork");
		exit(1);
	}
	if (!pid_child)
	{
		if (execv(token[0], token) == -1)
		{
			perror(token[0]);
			exit(1);
		}
	}
	else
		wait(NULL);
}
