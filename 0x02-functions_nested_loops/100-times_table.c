#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting from 0.
 * @n: The number of rows and columns in the times table.
 *
 * Return: None.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
				printf(", ");

			printf("%-4d", i * j);
		}
		printf("\n");
	}
}

