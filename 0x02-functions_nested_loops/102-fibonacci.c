#include "main.h"

/**
 * print_fibonacci_numbers - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void print_fibonacci_numbers(int n)
{
	int first = 1;
	int second = 2;
	int i;

	/* Print the first two Fibonacci numbers */
	_putchar(first + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(second + '0');

	/* Print the remaining Fibonacci numbers */
	for (i = 3; i <= n; i++)
	{
		int next = first + second;
		_putchar(',');
		_putchar(' ');
		_putchar(next + '0');

		/* Update values for next iteration */
		first = second;
		second = next;
	}

	_putchar('\n');
}

