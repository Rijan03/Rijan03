

#include <stdio.h>
#include <time.h>

// Function to perform linear search
int search(int arr[], int N, int x) {
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void) {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Start measuring execution time
    clock_t start_time = clock();

    int result = search(arr, N, x);

    // Stop measuring execution time
    clock_t end_time = clock();

    // Output the result
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);

    // Calculate execution time in seconds
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}

