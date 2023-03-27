<<<<<<< HEAD
3-puts.c
=======
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
>>>>>>> bcdb3a5e294c73675ffbf036b7ac93b4858d4f7f
