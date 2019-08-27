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

	if (execv(token[0], token) == -1)
	{
		perror(token[0]);

	}
}
