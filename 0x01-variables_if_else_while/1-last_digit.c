#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 980;
    int lastDigit = num % 10;

    printf("Last digit of %d is %d and is ", num, lastDigit);

    if (lastDigit == 0)
        printf("0\n");
    else
        printf("less than 6 and not 0\n");

    return 0;
}

