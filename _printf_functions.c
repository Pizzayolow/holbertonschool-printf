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
 * _print_char - writes the string s to sdtout
 * @arg: the string to print
 *
 * Return: if success = 1
 * On error, -1 is returned and error is set appropriatly
 */

int _print_char(va_list arg)
{
	char c_to_print;

	c_to_print = va_arg(arg, int);
	return (write(1, &c_to_print, 1));
}
/**
 * _print_str - writes the string s to sdtout
 * @arg: the string to print
 *
 * Return: if success = 1
 * On error, -1 is returned and error is set appropriatly
 */
int _print_str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
	}

	return (write(1, s, strlen(s)));
}

/**
 * _print_p - print a percent
 * @arg: arg pointer
 *
 * Return: if success = 1
 * On error, -1 is returned and error is set appropriatly
 */
int _print_p(va_list arg)
{
	char p = '%';
	(void) arg;

	return (write(1, &p, 1));
}
