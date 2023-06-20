#include <stdio.h>

int sum_multiples_3_or_5() {
    int total = 0;
    int num;
    
    for (num = 1; num < 1024; num++) {
        if (num % 3 == 0 || num % 5 == 0) {
            total += num;
        }
    }
    
    return total;
}

int main() {
    int result = sum_multiples_3_or_5();
    printf("%d\n", result);
    
    return (0);
}

