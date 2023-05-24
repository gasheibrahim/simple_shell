#include "shell.h"

/**
 * __exit - frees user input and then exits main program with a value
 * @str: user's command into shell (e.g. "exit 99")
 * @env: bring in environmental variable to free at error
 * @num: bring in nth user command line input to print in error message
 * @command: bring in command to free
 * Return: 0 if success 2 if fail
 */

int __exit(char **str, list_t *env, int num, char **command)
{
	int e_value = 0;

	if (str[1])
		e_value = _atoi(str[1]);

	if (e_value == -1)
	{
		illegal_number(str[1], num, env);
		free_double_ptr(str);
		return (2);
	}
	free_double_ptr(str);
	free_linked_list(env);
	if (command)
		free_double_ptr(command);
	exit(e_value);
}
