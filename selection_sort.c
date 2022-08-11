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
