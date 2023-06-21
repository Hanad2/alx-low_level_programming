#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void);

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
    print_fibonacci();
    return 0;
}

void print_fibonacci(void)
{
    unsigned long long int a = 1, b = 2, temp;
    int count;

    printf("%llu, %llu", a, b);

    for (count = 3; count <= 98; count++)
    {
        temp = a + b;
        printf(", %llu", temp);

        a = b;
        b = temp;
    }

    printf("\n");
}

