#include "main.h"
/**
 * longueur_int - deter;ine the lenght of a int
 * @number: the string to print
 *
 * Return: if success = 1
 */

int longueur_int(int number)
{
	int count = 0;

	if (number < 0)
	{
		number = -number;
	}
	while (number > 0)
	{
		number = number / 10;
		count++;
	}

	return (count);
}

/**
 * _print_decimal - print the decimal
 * @arg: the number who want to print
 *
 * Return: if success = the int
 */

int _print_decimal(va_list arg)
{
	int i = 0;
	char zero = '0';
	int number = va_arg(arg, int);
	char *tableau;

	if (number == 0)
	{
		return (write(1, &zero, 1));
	}

	tableau = malloc(sizeof(char) * longueur_int(number) + 1);
	if (tableau == NULL)
	{
		return (-1);
	}

	if (number < 0)
	{
		tableau = malloc(sizeof(char) * longueur_int(number) + 2);
		if (tableau == NULL)
		{
			return (-1);
		}

		number *= (-1);
		putchar('-');
	}


	while (number > 0)
	{
		tableau[i] = number % 10;
		number = number / 10;
		i++;
	}
	reverse_array(tableau, i);

	return (i + 1);
}

/**
 * reverse_array - deter;ine the lenght of a int
 * @tableau: the array who want to reverse
 * @longueurtableau: the lenght of the array
 *
 * Return: int
 */

int reverse_array(char *tableau, int longueurtableau)
{
	int i = 0;
	int count = 0;

	longueurtableau = longueurtableau - 1;

	for (i = longueurtableau; i >= 0; i--, count++)
	{
		_putchar(tableau[i] + '0');
	}

	return (count);
}
