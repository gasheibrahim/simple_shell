#include "shell.h"

/**
 * env_linked_list - creates a linked list from environmental variables
 * @env: environmental variables
 * Return: linked list
 */

list_t *env_linked_list(char **env)
{
	list_t *head;
	int i = 0;

	head = NULL;
	while (env[i])
	{
		add_end_node(&head, env[i]);
		i++;
	}
	return (head);
}

/**
 * _env - prints environmental variables
 * @str: user's command into shell (i.e. "env")
 * @env: environmental variables
 * Return: 0 (success)
 */

int _env(char **str, list_t *env)
{
	free_double_ptr(str);
	print_list(env);
	return (0);
}
