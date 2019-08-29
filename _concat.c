#include "holberton.h"
/**
 * _concat - Func that concatenate the path with the command typed by the user
 * @path: The path tokenized.
 * @command: The command that the user type.
 * Return: The path concatenate in format tokenized.
 */
char **_concat(char *command, char **path)
{
	char **patconcat = NULL;
	int lencom = 0, lenpath = 0, patoks = 0;
	int i = 0, p, j;

	lencom = _strlen(command);

	while (path[patoks])
	{
		patoks++;
	}

	patconcat = malloc(sizeof(char *) * patoks);

	for (i = 0; path[i] != NULL; i++)
	{
		p = 0;

		lenpath = _strlen(path[i]);
		patconcat[i] = malloc(sizeof(char) * (lencom + lenpath));
		for (j = 0; j <= (lencom + lenpath); j++)
		{
			if (j < lenpath)
			{
				patconcat[i][j] = path[i][j];
			}
			else if (j == lenpath)
			{
				patconcat[i][j] = '/';
			}
			else
			{
				patconcat[i][j] = command[p];
					p++;
			}
		}
	}

	patconcat[i] = NULL;

	return (patconcat);
}
