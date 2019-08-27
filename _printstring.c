#include "holberton.h"
/**
 *
 */
void _printchar(char c)
{
	write(STDOUT_FILENO, &c ,1);
}
