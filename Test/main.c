#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int len3;
    unsigned int ui;
    (void) ui;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);   
    
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    
    
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    

    len3 = _printf("Unsigned Decimal: %u\n", 12345);
    printf("Length: %d\n\n", len3);

    len3 = _printf("Octal: %o\n", 12345);
    printf("Length: %d\n\n", len3);

    len3 = _printf("Lowercase Hexadecimal: %x\n", 12345);
    printf("Length: %d\n\n", len3);

    len3 = _printf("Uppercase Hexadecimal: %X\n", 12345);
    printf("Length: %d\n\n", len3);
    
    return (0);
}

