#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;

    // Example of a while loop
    printf("Using while loop:\n");
    while (count < 5) {
        printf("Count is %d\n", count);
        count++;
    }

    count = 0; // Reset count

    // Example of a do-while loop
    printf("\nUsing do-while loop:\n");
    do {
        printf("Count is %d\n", count);
        count++;
    } while (count < 5);

    return 0;
}
