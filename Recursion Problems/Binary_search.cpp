#include <iostream>
#include <algorithm>
using namespace std;

int Binary_search(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            end = mid + 1;
        }
    }
    return -1;
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
    sort(arr, arr + n); // this is logic of sorting of an array.
    cout << "********* Sorting Process Successfull! *******" << endl;
    int key;
    cout << "Enter the Key Element you want to Search in this Array :";
    cin >> key;
    int pos = Binary_search(arr, n, key);

    if (pos == -1)
    {
        cout << "SORRY! Element is not found in the given Array" << endl;
    }
    else
    {
        cout << "SUCCESS! Element is Found Successfully at Position " << pos << endl;
    }
    return 0;
}