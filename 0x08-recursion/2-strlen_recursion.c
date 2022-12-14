#include "main.h"

/**
 * * _strlen_recursion -> function to get length of string
 * * @s: string param
 * * Return: length of string
 * */
int _strlen_recursion(char *s)
{	
	/* base condition */
		if (*s == '\0')
			return (0);
		else
			return (1 + _strlen_recursion(s + 1));
}
