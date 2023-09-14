#include <stdio.h>

int main() {
    int n, inv = 0, digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Please enter a three-digit number.\n");
        return 1;
    }

    // Reverse the number digit by digit
    while (n > 0) {
        digit = n % 10;        // Get the last digit
        inv = inv * 10 + digit; // Append the digit to the result in reverse order
        n /= 10;               // Remove the last digit from n
    }

    printf("The reverse of %d is: %d\n", n, inv);

    return 0;
}
