#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        if (min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{
     int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
	int array[size] ;
    printf("Enter the array: \n");
    for (int i = 0; i < size; i++)
    {
    scanf("%d",&array[i]);
        /* code */
    }
    int n = sizeof(array) / sizeof(array[0]);
    selectionSort(array, n);
    printf("Sorted array: \n");
    printArray(array, n);
    return 0;
}
