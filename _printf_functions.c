#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_char - Handles %c format specifier
 * @list: The variadic arguments
 * Return: The int value
 */

int print_char(va_list list)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
* print_str - Handles %s format specifier
* @list: The variadic arguments
* Return: The int value
*/

int print_str(va_list list)
{
	char *st;
	int i = 0, len = 0;

	st = va_arg(list, char *);

	if (st == NULL)
	{
		st = "(null)";
	}

	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i++;
		len++;
	}
	return (len);
}

/**
* conv_num - Handles number conversions.
* @n: The number to evaluate.
* @base: The base number.
* @numbers: A pointer to the arguments to evaluate.
* Return: The result.
*/

int conv_num(unsigned int n, unsigned int base, char *numbers)
{
	int r = 1;

	if (n >= base)
		r += conv_num(n / base, base, numbers);
	_putchar(numbers[n % base]);
	return (r);
}

/**
* print_number - Handles %d format specifier
* @list: The variadic arguments.
* Return: The length of the number.
*/

int print_number(va_list list)
{
	int n = va_arg(list, int);
	int len = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		len++;
		num = n * -1;
	}
	else
	{
		num = n;
	}
	len += conv_num(num, 10, "0123456789");
	return (len);
}

/**
 * _putchar - Print char by char.
 * @c: brings value to print
 * Return: Integr result of write function.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}


