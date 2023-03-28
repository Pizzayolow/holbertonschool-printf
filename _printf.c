#include "main.h"

/**
 * _printf - the printf fonction
 * @format: string of format to use and print
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int nbpr = 0;
	type_print storage[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"%", _print_p},
		{'\0', NULL}
	};
	va_list arg;

	va_start(arg, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; storage[j].type_arg != 0; j++)
			{
				if (format[i + 1] == *storage[j].type_arg)
				{
					nbpr += storage[j].fp(arg);
					i++;
					break;
				}
			}
		}
		else
		{
			nbpr += _putchar(format[i]);
		}
	}
	va_end(arg);
	return (nbpr);
}