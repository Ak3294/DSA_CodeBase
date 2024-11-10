// Test Case : FAILED

// C++ Program to Implementation of Heap sort
#include <bits/stdc++.h>
using namespace std;

// To heapsort is a subtree rooted with node i which is an index in arr[].
// n is the size of heap
void heapsort(int arr[], int n, int i)
{
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left= 2 * i + 1
    int right = 2 * i + 2; // right= 2 * i +2

    // If left child is largest than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is largest than root
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        // swap(arr[i], arr[largest]);
        int temp1 = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp1;

        // Recursively heapsort the affacted sub tree
        heapsort(arr, n, largest);
    }
}

void heap(int arr[], int n)
{
    // Build Heap(re-arrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapsort(arr, n, i);

    // one by one extract an element from heap
    for (int i = n - 1; i > 0; i--)
    {
        // move current root to end
        // swap(arr[0], arr[i]);
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;

        // call max, heapsort on the reduced heap
        heapsort(arr, i, 0);
    }
}

// Main function

int main()
{
    int n;
    cout << "Enter the Size of an Array :";
    cin >> n;

    cout << "Enter the Element(Unsorted Array)\n";
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    heap(arr, n);
    cout << "Sorted Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}