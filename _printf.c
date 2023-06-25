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

			if (format[pos] == 'c' || format[pos] == 's'
					|| format[pos] == 'd' || format[pos] == 'i')
				len = len + (*case_selector(&format[pos]))(list);

			else if (format[pos] != '%')
			{
				_putchar('%');
				_putchar(format[pos]);
				len = len + 2;
			}
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


