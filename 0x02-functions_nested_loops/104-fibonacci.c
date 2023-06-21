#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    unsigned long long int fib1 = 1, fib2 = 1, fib_sum;

    printf("%llu, %llu", fib1, fib2);

    for (i = 2; i < 100; i++)
    {
        fib_sum = fib1 + fib2;
        printf(", %llu", fib_sum);
        fib1 = fib2;
        fib2 = fib_sum;
    }

    printf("\n");
    return 0;
}

