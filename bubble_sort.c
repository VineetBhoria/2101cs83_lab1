// C program for implementation of Bubble sort, swapping function
#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
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
	bubbleSort(array, n);
	printf("Sorted array: \n");
	printArray(array, n);
	return 0;
}

