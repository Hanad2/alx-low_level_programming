#include <stdio.h>

void print_fibonacci(void);
void add(unsigned int *num1, unsigned int *num2, unsigned int *result);

int main(void)
{
    print_fibonacci();

    return 0;
}

void print_fibonacci(void)
{
    unsigned int a[100] = {1, 2};
    unsigned int *prev = &a[0];
    unsigned int *curr = &a[1];
    unsigned int result[100];
    int i;

    printf("%u, %u", *prev, *curr);

    for (i = 2; i < 98; i++)
    {
        add(prev, curr, result);
        printf(", %u", *result);

        prev = curr;
        curr = result;
    }

    printf("\n");
}

void add(unsigned int *num1, unsigned int *num2, unsigned int *result)
{
    int i, carry = 0;

    for (i = 0; i < 100; i++)
    {
        int sum = num1[i] + num2[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
}

