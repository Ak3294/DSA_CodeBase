#include <iostream>
using namespace std;

// First number is always is 1 and last is always N.
int MissingNumber(int arr[], int N, int size)
{
    int seriesSum = (N * (N + 1) / 2);
    int arraySum = 0;
    for (int i = 0; i < size; i++)
    {
        arraySum += arr[i];
    }
    return seriesSum - arraySum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int N;
    cin >> N;

    int ans = MissingNumber(arr, N, size);
    cout << "Missing Number is :" << ans << endl;
}