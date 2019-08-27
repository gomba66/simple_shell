#include "holberton.h"
/**
 * _puts - Function that modify the string color
 * @color: String.
 * Return: Nothing.
 */
void _printstring(char *color)
{
	int i = 0;

	while (color[i] != '\0')
	{
		_printchar(color[i]);
		i++;
	}

}
