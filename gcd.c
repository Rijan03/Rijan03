
#include <stdio.h>
#include <time.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int x, y;

    printf("Enter two numbers to be calculated: ");
    scanf("%d %d", &x, &y);

    // Start measuring execution time
    clock_t start_time = clock();

    int gcd_result = gcd(x, y);

    // Stop measuring execution time
    clock_t end_time = clock();

    // Calculate execution time in seconds
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("GCD of %d and %d is %d\n", x, y, gcd_result);
    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}

