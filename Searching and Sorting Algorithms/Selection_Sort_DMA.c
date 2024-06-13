
/*
// Selection Sort Program (Static Implementation)

// Test case : PASSED
#include <stdio.h>

int main()
{
    int size, min, loc;
    printf("Enter the Size of an Array :");
    scanf("%d", &size);

    int arr[size], i, j;
    for (i = 0; i < size; i++) //taking the elements
    {
        printf("Enter the Array Elements\n");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size - 1; i++) //traversing for find minimum element
    {
        min = arr[i];
        loc = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                loc = j;
            }
        }
        int temp;
        temp = arr[loc];
        arr[loc] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted Array is :\n");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
/*

/*
// Test case : PASSED
// Selection Sort Program Dyanamic Implementation
#include <stdio.h>
#include <malloc.h>
int main()
{
    int size, min, loc;
    printf("Enter the Size of An Array\n");
    scanf("%d", &size);

    float *arr;
    arr = (float *)malloc(size * sizeof(float)); // Allocate the memory of the Array
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Array\n");
        scanf("%f", (arr + i));
    }
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        loc = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                loc = j;
            }
        }
        float temp;
        temp = arr[loc];
        arr[loc] = arr[i];
        arr[i] = temp;
    }
    printf("All the Elements are :");
    for (int i = 0; i < size; i++)
    {
        printf(" %f ", *(arr + i));
    }
    return 0;
}
*/

// C program for implementation of selection sort
// Test case : PASSED
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j,min;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;

        // Swap the found minimum element with the first element
        swap(&arr[min], &arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array is: \n");
    printArray(arr, n);
    return 0;
}

/*

#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int smallest = i;
        for (int j = i + 1; i <= n - 1; i++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        //swap(arr[i],arr[smallest]);
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

int main()
{
    int n;
    printf("Enter the Size of an Array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of an Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    selection_sort(arr, n);
    printf("Sorted Array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/
