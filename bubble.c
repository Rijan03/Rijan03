

#include <stdio.h>
#include <time.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main method
int main() {
  int data[] = {-4, 23, 756, 65, -989};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  // Start measuring execution time
  clock_t start_time = clock();

  bubbleSort(data, size);
  
  // Stop measuring execution time
  clock_t end_time = clock();

  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);

  // Calculate time taken in seconds
  double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
  
  printf("Execution Time: %f seconds\n", time_taken);

  return 0;
}

