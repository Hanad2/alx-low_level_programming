#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib[100];

	fib[0] = 0;
	fib[1] = 1;

	printf("%lu, %lu", fib[0], fib[1]);

	for (i = 2; i < 100; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(", %lu", fib[i]);
	}

	printf("\n");
	return (0);
}

