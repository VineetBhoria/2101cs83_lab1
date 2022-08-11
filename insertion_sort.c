// Insertion sort in C

#include <stdio.h>

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
    int size1;
    printf("Enter the size of array: \n");
    scanf("%d",&size1);
	int array[size1] ;
    printf("Enter the array: \n");
    for (int i = 0; i < size1; i++)
    {
    scanf("%d",&array[i]);
        /* code */
    }
  int size = sizeof(array) / sizeof(array[0]);
  insertionSort(array, size);
  printf("Sorted array in ascending order:\n");
  printArray(array, size);
}