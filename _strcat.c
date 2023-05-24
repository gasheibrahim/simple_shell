#include "shell.h"

/**
 * _strcat - concatenates two strings
 * @dest: input string destination
 * @src: input string to append
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;
	int len = 0;
	int i = 0;

	while (dest[l1])
	{
		l1++;
		len++;
	}
	while (src[l2])
	{
		l2++;
		len++;
	}

	dest = _realloc(dest, l1, sizeof(char) * len + 1);

	while (src[i])
	{
		dest[l1] = src[i];
		l1++;
		i++;
	}
	dest[l1] = '\0';

	return (dest);
}
