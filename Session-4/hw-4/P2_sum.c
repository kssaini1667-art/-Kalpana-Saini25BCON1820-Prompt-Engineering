#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of natural numbers from 1 to %d = %d\n", n, sum);
    return 0;
}
