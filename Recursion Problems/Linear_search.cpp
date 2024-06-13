#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1; // because -1 is invalid index
}

int main()
{
    int n;
    cout << "Enter the Size of an Array:";
    cin >> n;
    int arr[n];
    cout << "Enter the Element of an Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the Key Element you want to Search in the Array:";
    cin >> key;

    int pos = linear_search(arr, n, key);
    if (pos == -1)
    {

        cout << "Element not fount in the Given Array.";
    }
    else
    {
        cout << "The key element " << key << " are found at Position " << pos;
    }
}