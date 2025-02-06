
#include <stdio.h>
#include <time.h>

// Function to swap the positions of two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform selection sort
void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            // Select the minimum element in each loop (for ascending order).
            // Change > to < for descending order.
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        // Put min at the correct position
        swap(&array[min_idx], &array[step]);
    }
}

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {23, 54, 67, 81, -1, 55};
    int size = sizeof(data) / sizeof(data[0]);

    // Start measuring execution time
    clock_t start_time = clock();

    selectionSort(data, size);

    // Stop measuring execution time
    clock_t end_time = clock();

    printf("Sorted array in Ascending Order:\n");
    printArray(data, size);

    // Calculate execution time in seconds
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}

