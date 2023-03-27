#include "main.h"

/**
 * _putchar - writes the character c to sdtout
 * @c: the character to print
 *
 * Return: if success = 1
 * On error, -1 is returned and error is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_str - writes the string s to sdtout
 * @s: the string to print
 *
 * Return: if success = 1
 * On error, -1 is returned and error is set appropriatly
 */

int _print_str(char *s)
{
	return (write(1, s, strlen(s)));
}
