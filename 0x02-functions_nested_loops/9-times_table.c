#include "main.h"

/**
 * print_times_table - Prints the 9 times table, starting with 0.
 */
void print_times_table(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        int result = number * 9;

        _putchar('0' + number);
        _putchar(' ');
        _putchar('x');
        _putchar(' ');
        _putchar('9');
        _putchar(' ');
        _putchar('=');
        _putchar(' ');
        _putchar('0' + result);
        _putchar('\n');
    }
}

