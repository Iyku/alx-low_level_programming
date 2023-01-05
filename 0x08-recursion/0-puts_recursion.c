/*
 * File: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*S)
	{
		_putchar(*s);
		_puts_recursion(S + 1);
	}
	
	else
		_putchar('\n');
}
