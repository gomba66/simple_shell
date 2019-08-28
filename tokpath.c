#include "holberton.h"
/**
 * _tokpath - Function that tokenize the path
 * @buffer: string that contain the path
 * Return: tokenpath
 *
 */
char **_tokpath(char *buffer)
{
	char *token;
	char *toktemp = NULL;
	char **newArray;
	int i = 0, j = 5;
	char *delim = ":";
	int sizebuf = 1024;

	newArray = malloc(sizeof(char *) * sizebuf);

	token = strtok(buffer, delim);
	toktemp = token;
	while (token != NULL)
	{
		newArray[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	newArray[i] = NULL;
	i = 0;
	while (newArray[0][i] != '\0')
	{
		newArray[0][i] = toktemp[j];
		i++;
		j++;
	}

	return (newArray);
}
