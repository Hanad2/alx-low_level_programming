#include "main.h"
#include <stdio.h>

/* Prototype declaration for _putchar */
int _putchar(char c);

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int count = 50;
    int first = 1;
    int second = 2;
    int i;

    /* Print the first two Fibonacci numbers */
    printf("%d, %d", first, second);

    /* Print the remaining Fibonacci numbers */
    for (i = 3; i <= count; i++)
    {
        int next = first + second;
        printf(", %d", next);

        /* Update values for next iteration */
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

/* Implementation of _putchar */
int _putchar(char c)
{
    return putchar(c);
}

