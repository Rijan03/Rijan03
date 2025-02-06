
#include <stdio.h>
#include <time.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the Fibonacci sequence position:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Start measuring execution time
        clock_t start_time = clock();

        int result = fibonacci(n);

        // Stop measuring execution time
        clock_t end_time = clock();

        printf("Fibonacci number at position %d is: %d\n", n, result);

        // Calculate time taken in seconds
        double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

        printf("Execution Time: %f seconds\n", time_taken);
    }

    return 0;
}

