#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet using putchar */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* Print a new line using putchar */
	putchar('\n');

	return (0);
}

