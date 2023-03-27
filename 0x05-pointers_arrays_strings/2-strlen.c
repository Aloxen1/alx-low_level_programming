<<<<<<< HEAD
2-strlen.c
=======
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
>>>>>>> bcdb3a5e294c73675ffbf036b7ac93b4858d4f7f
