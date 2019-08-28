#include "holberton.h"
/**
 * _searchpath - Search for path in enviroment.
 * @envi: Is the enviroment.
 * Return: The path string.
 */

char *_searchpath(char **envi)
{
	char *string = NULL;
	int i = 0;
	char *string2 = "PATH";
	int comp = 0;

	while (envi != NULL)
	{
		string = envi[i];
		comp = _strcmp(string, string2, 4);
		if (comp == 0)
		{
			return (envi[i]);
		}
		i++;
	}
	perror("No path found");
	return (NULL);
}
