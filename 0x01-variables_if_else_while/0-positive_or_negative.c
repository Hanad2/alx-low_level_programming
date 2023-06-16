#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0)); /* Initialize random seed */

	n = rand() % 199 - 99; /* Generate random number between -99 and 99 */

	printf("%d is ", n);

	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}

