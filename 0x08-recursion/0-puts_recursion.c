#include "main.h"

/**
 * * _puts_recursion -> this is a function to print string recursivly
 * * @: string paramenter
 * * return: void.
 * */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
