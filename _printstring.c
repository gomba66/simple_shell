#include "holberton.h"
/**
 * _printstring - Function that modify the string color
 * @text: String.
 * Return: Nothing.
 */
void _printstring(char *text)
{
	int i = 0;

	while (text[i] != '\0')
	{
		_printchar(text[i]);
		i++;
	}

}
