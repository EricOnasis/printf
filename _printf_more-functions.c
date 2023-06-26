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

