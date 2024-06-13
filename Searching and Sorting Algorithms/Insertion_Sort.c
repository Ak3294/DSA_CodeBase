// Test Case : PASSED

#include<stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = arr[step];
        int j = step - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int size;
    printf("Enter the Size of an Array :");
    scanf("%d", &size);
    int arr[100], i, j;
    printf("Enter Any %d Integers  of an Array Elements\n", size);
    for (i = 0; i < size; i++) // taking the elements
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, size);
    printf("Sorted Array is  :");
    printArray(arr, size);
}
