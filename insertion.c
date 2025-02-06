

#include <stdio.h>
#include <time.h>

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function to perform insertion sort
void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        // Compare key with each element on the left until an element smaller is found.
        // For descending order, change key < array[j] to key > array[j].
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int main() {
    int data[] = {-9, 70, 91, 84, 7};
    int size = sizeof(data) / sizeof(data[0]);

    // Start measuring execution time
    clock_t start_time = clock();

    insertionSort(data, size);

    // Stop measuring execution time
    clock_t end_time = clock();

    printf("Sorted array in ascending order:\n");
    printArray(data, size);

    // Calculate execution time in seconds
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}

