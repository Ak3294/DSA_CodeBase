#include <Bits/stdc++.h>
using namespace std;

bool isSorted(int array[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (array[0] > array[1])
    {
        return false;
    }
    bool is_small_array_sorted = isSorted(array + 1, n - 1);
    // if (is_small_array_sorted)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return is_small_array_sorted;
}

int main()
{
    int array[] = {1, 2, 3, 4, 9, 6};
    if (isSorted(array, 6))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
    return 0;
}
