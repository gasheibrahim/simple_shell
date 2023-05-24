#include "shell.h"

/**
 * get_line - stores into malloced buffer the user's command into shell
 * @str: buffer
 * Return: number of characters read
 */

size_t get_line(char **str)
{
	size_t i = 0;
	size_t size = 0;
	size_t t = 0;
	size_t t2 = 0;
	size_t n = 0;
	char buff[1024];

	while (t2 == 0 && (i = read(STDIN_FILENO, buff, 1024 - 1)))
	{
		if ((int i) == -1)
			return (-1);

		buff[i] = '\0';
		n = 0;
		while (buff[n])
		{
			if (buff[n] == '\n')
				t2 = 1;
			n++;
		}

		if (t == 0)
		{
			i++;
			*str = malloc(sizeof(char) * i);
			*str = _strcpy(*str, buff);
			size = i;
			t = 1;
		}
		else
		{
			size += i;
			*str = _strcat(*str, buff);
		}
	}
	return (size);
}
