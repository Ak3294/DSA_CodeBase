#include <iostream>
using namespace std;

void Selection_sort(int arr[], int n)          // 5 3 6 1 4
{
    //Traversing of Pointer     
    for (int ptr = 0; ptr <= n - 2; ptr++)      // ptr traverse from 5 -> 1
    {
        int smallest = ptr;                    // smallest = 0
        for (int j = ptr + 1; j <= n - 1; j++)  // j traverse from 3 -> 4
        {
            if (arr[j] < arr[smallest])        //arr[j]=3    arr[0]=5
            {                                  //3<5
                smallest = j;                  //smallest=1
            }
        }
        swap(arr[ptr], arr[smallest]);
    }
}
int main()
{
    int n;
    cout << "Enter the Size of an Array:";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of an Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Selection_sort(arr, n);
    cout << "Sorted Array is :";
    for (int ptr = 0; ptr < n; ptr++)
    {
        cout << arr[ptr]<<" ";
    }
}