
#include <stdio.h>
#include <time.h>

// Recursive function to calculate factorial
int fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;
    
    printf("Enter the sequence position:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Start measuring execution time
        clock_t start_time = clock();

        int result = fact(n);

        // Stop measuring execution time
        clock_t end_time = clock();

        printf("Factorial of %d is: %d\n", n, result);

        // Calculate time taken in seconds
        double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
        
        printf("Execution Time: %f seconds\n", time_taken);
    }

    return 0;
}

