// This is Optimize Bubble sort Program

#include <iostream>
using namespace std;

void Bubble_sort(int arr[], int n)
{
    for (int count = 1; count <= n - 1; count++)
    {
        int flag = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)         //when array already sorted.   
        {
            break;
        }
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
    Bubble_sort(arr, n);

    cout << "Sorted Array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}