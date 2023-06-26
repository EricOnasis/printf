#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
* struct cases - Cases to be considered for format specifiers.
* @c: The operator to be used for the struct
* @f: The function to be called depending on selected case
*/

typedef struct cases
{
	char *c;
	int (*f)(va_list);
} case_options;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_str(va_list list);
int print_number(va_list list);
int (*case_selector(const char *format))(va_list list);
int conv_num(unsigned int n, unsigned int base, char *numbers);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_hex_uppercase(va_list list);

#endif

