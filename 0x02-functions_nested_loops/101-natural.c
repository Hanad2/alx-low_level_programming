#include <stdio.h>

int sum_multiples_3_or_5(void)
{
    int total = 0;
    for (int num = 1; num < 1024; num++)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            total += num;
        }
    }
    return total;
}

int main(void)
{
    int result = sum_multiples_3_or_5();
    printf("%d\n", result);
    return 0;
}

