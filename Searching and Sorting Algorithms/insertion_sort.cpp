// Test Case : PASSED

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
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
    cout << "Enter the Size of an Array :";
    cin >> size;
    int arr[100], i, j;
    cout << "Enter Any" << size << "Integers  of an Array Elements\n";
    for (i = 0; i < size; i++) // taking the elements
    {
        cin >> arr[i];
    }

    insertionSort(arr, size);
    cout<<"Sorted Array is  :";
    printArray(arr, size);
}
