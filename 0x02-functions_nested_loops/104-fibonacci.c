#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib_next;
	unsigned int count;

	printf("%lu, %lu", fib1, fib2); /* Print the first two Fibonacci numbers */

	for (count = 3; count <= 98; count++)
	{
		fib_next = fib1 + fib2;
		printf(", %lu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf(", ...\n"); /* Print ellipsis to indicate the sequence continues */

	return 0;
}

