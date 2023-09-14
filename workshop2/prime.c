#include <stdio.h>

int main() {
    int n;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers less than or equal to %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume i is prime initially

        if (i <= 1) {
            isPrime = 0; // 0 and 1 are not prime
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0; // If i is divisible by any number between 2 and sqrt(i), it's not prime
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
