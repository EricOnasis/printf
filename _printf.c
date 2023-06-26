#include "main.h"
#include <stdlib.h>
/**
* _printf - Prints formatted output
* @format: A pointer to the string to analyze
* Return: Integer
*/
int _printf(const char *format, ...)
{
	va_list list;
	int pos = 0, len = 0;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format && format[pos] != '\0')
	{
		if (format[pos] == '%')
		{
		pos++;
		if (format[pos] == '%')
		{
			_putchar(format[pos]);
			len++;
		}
		else if (format[pos] == 'c' || format[pos] == 's' || format[pos] == 'd'	||
		format[pos] == 'i' || format[pos] == 'b' || format[pos] == 'u'
		|| format[pos] == 'o' || format[pos] == 'x' || format[pos] == 'X')
		{
			len += (*case_selector(&format[pos]))(list);
		}
		else if (format[pos] != '%')
		{
			_putchar('%');
			_putchar(format[pos]);
			len += 2;
		}
		else if (format[pos] == '\0')
			return (-1);
		}
		else
		{
		_putchar(format[pos]);
		len++;
		}
	pos++;
	}
	va_end(list);
	return (len);
}
