#include "main.h"
#include <stdlib.h>

/**
* case_selector - A struct function that checks the case
* @format: brings the array's last position before variadic arguments
* Return: integer value.
*/

int (*case_selector(const char *format))(va_list list)
{
	case_options array[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_number},
		{"i", print_number},
		{"b", print_binary},
		{NULL, NULL}
	};

	int position = 0;

	while (array[position].c != NULL)
	{
		if (*(array[position].c) == *format)
		{
			return (array[position].f);
		}
		position++;
	}
	return (0);
}

