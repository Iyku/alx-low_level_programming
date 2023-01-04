/*
 * File: 1-print_rev_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _print_rev_recursion - prints a sring in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(S + 1);
		_putchar(*S);
	}
}
