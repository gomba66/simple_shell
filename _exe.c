#include "holberton.h"
/**
 * _execv - Function to execute a program
 * @token: string tokenized
 * @tokpath: path tokenized
 * @av: string that contain the name of the program.
 * Return: not return on success, otherwise return -1 if fail.
 */
void _execv(char **token, char **tokpath)
{
	pid_t pid_child = 0;
	int j = 0;

	pid_child = fork();
	if (pid_child < 0)
	{
		perror("Error fork");
		exit(1);
	}
	if (!pid_child)
	{
		if (token[0][0] == '/')
		{
			if (execve(token[0], token, tokpath) == -1)
			{
				perror(token[0]);
				exit(1);
			}
		}
		else
		{
			while (access(tokpath[j], X_OK | F_OK) < 0 && tokpath[j])
				j++;
			if (execve(tokpath[j], token, tokpath) == -1)
				perror(token[0]);
			exit(1);
		}
	}
	else
		wait(&pid_child);

}
