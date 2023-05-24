#include "shell.h"

/**
 * _strdup - function that returns a pointer to an allocated memory
 * containing a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i;
	int len = 0;

	if (!str)
		return (NULL);

	while (*(str + len))
		len++;

	duplicate_str = malloc(sizeof(char) * (len + 1));
	if (!duplicate_str)
		return (NULL);

	for (i = 0; i <= len; i++)
		*(duplicate_str + i) = *(str + i);

	return (duplicate_str);
}
