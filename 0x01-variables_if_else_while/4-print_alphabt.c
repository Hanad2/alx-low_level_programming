#include <stdio.h>

/**
 * main - Prints the alphabet without 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}

