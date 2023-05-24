#include "shell.h"

/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Return: length of the string s
 */

int _strlen(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
