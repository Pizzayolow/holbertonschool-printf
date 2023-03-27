#include "main.h"

/**
 * _printf - the printf fonction
 * @format: string of format to use and print
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	int j = 0;

	typeprint storage[] = {
		{"c", _putchar},
		{"s", _print_str},
		{NULL, NULL}
	};

	va_start(arg, format);

	while (format && format[i] != '\0')
	{
		while (j < 2)
		{
			if (format[i] == storage[j].type_arg)
			storage[j].fp(arg);
		}
		j++
	}
	i++;
	va_end(arg);
	return (0);
}
