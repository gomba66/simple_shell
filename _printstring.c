#include "holberton.h"
/**
 * _printchar - print something
 * @c: characters to print
 * Return: Nothing
 */
void _printchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
