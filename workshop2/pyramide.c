#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of lines for the pyramid: ");
    scanf("%d", &n);

    // Loop for each line of the pyramid
    for (int i = 1; i <= n; i++) {
        // Calculate the number of spaces and stars for each line
        int spaces = n - i;
        int stars = 2 * i - 1;

        // Display spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // Display stars
        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
