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
 * putint - print the decimal
 * @number: the number who want to print
 *
 * Return: if success = the int
 */

int putint(long int number)
{
	if (number < 0)
	{
		number = -number;
		_putchar('-');
	}

	if (number > 10)
	{
		putint(number / 10);
	}

	_putchar(number % 10 + '0');

	return (longueur_int(number));
}

/**
* _print_decimal - print the decimal
* @arg: the number who want to print
*
* Return: if success = the int
*/

int _print_decimal(va_list arg)
{
	long int number = va_arg(arg, int);

	return (putint(number));

}


