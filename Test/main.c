#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Unsigned Decimal: %u\n", 12345);
    printf("Length: %d\n\n", len);

    len = _printf("Octal: %o\n", 12345);
    printf("Length: %d\n\n", len);

    len = _printf("Lowercase Hexadecimal: %x\n", 12345);
    printf("Length: %d\n\n", len);

    len = _printf("Uppercase Hexadecimal: %X\n", 12345);
    printf("Length: %d\n\n", len);

    return 0;
}

