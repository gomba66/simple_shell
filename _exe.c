#include "holberton.h"
/**
 * _execv - Function to execute a program
 * @token: string tokenized
 * @count: counter
 * @tokpath: path tokenized
 * @av: string that contain the name of the program.
 * Return: not return on success, otherwise return -1 if fail.
 */
void _execv(char **token, int count, char **tokpath, char **av)
{
	pid_t pid_child = 0;
	int j = 0, newcount = 0, x = 2;
	char *namefile;

	for (x = 2, newcount = 0; av[0][x] != '\0'; x++, newcount++)
		;
	namefile = malloc(sizeof(char) * newcount);
	for (x = 2, j = 0; av[0][x] != '\0'; x++, j++)
		namefile[j] = av[0][x];
	namefile[j] = '\0';
	j = 0;
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
