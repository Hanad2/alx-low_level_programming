#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0, even_sum = 2;

	while (fib2 <= 4000000)
	{
		sum = fib1 + fib2;

		if (sum % 2 == 0)
		{
			even_sum += sum;
		}

		fib1 = fib2;
		fib2 = sum;
	}

	printf("%lu\n", even_sum);

	return 0;
}

