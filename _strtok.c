#include "holberton.h"
/**
 * _strtok - Function that tokenize the string
 * @buffer: Is the string that join from main
 * Return: An array of pointers
 */
char **_strtok(char *buffer)
{
	char *token;
	char **newArray;
	int i = 0;
	char *delim = " \n";
	int sizebuf = 1024;

	newArray = malloc(sizeof(char *) * sizebuf);

	token = strtok(buffer, delim);

	while (token != NULL)
	{
		newArray[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	newArray[i] = NULL;
	return (newArray);
}
