#include "main.h"
#include <stdlib.h>

/**
* print_binary - A function that prints the binary representation.
*               of an unsigned integer
* @list: A variable argument list containing the unsigned integer to print.
* Return: The number of characters printed.
*/

int print_binary(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int len = 0;

	len += conv_num(n, 2, "01");
	return (len);
}

/**
 * print_unsigned - Handles %u format specifier
 * @list: The variadic arguments
 * Return: The length of the unsigned integer
 */
int print_unsigned(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int len = 0;

	len += conv_num(n, 10, "0123456789");
	return (len);
}

/**
 * print_octal - Handles %o format specifier
 * @list: The variadic arguments
 * Return: The length of the octal number
 */
int print_octal(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int len = 0;

	len += conv_num(n, 8, "01234567");
	return (len);
}

/**
 * print_hex - Handles %x format specifier
 * @list: The variadic arguments
 * Return: The length of the hexadecimal number
 */
int print_hex(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int len = 0;

	len += conv_num(n, 16, "0123456789abcdef");
	return (len);
}

/**
 * print_hex_upper - Handles %X format specifier
 * @list: The variadic arguments
 * Return: The length of the hexadecimal number
 */
int print_hex_uppercase(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int len = 0;

	len += conv_num(n, 16, "0123456789ABCDEF");
	return (len);
}
