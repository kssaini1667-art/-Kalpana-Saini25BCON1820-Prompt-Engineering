#include <stdio.h>

int main(void) {
    int number;
    int is_prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 2) {
        is_prime = 0;
    } else {
        for (int divisor = 2; divisor * divisor <= number; divisor++) {
            if (number % divisor == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}
