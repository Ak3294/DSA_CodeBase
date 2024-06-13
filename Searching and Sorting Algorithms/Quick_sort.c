// Test Case: PASSED
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
#include <stdio.h>
void sort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;
    int pivot = arr[mid];
    while (s <= e)
    {

        while (arr[s] < pivot)
        {
            s++;
        }

        while (arr[e] > pivot)
        {
            e--;
        }
        if (s <= e)
        {
            int temp = arr[s];
            arr[e] = arr[e];
            arr[e] = temp;
            s++;
            e++;
        }
    }
    sort(arr, start, e);
    sort(arr, s, end);
}
int main()
{
    int n, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    int arr[100];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, 0, n - 1);
    printf("The array after quick sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/
