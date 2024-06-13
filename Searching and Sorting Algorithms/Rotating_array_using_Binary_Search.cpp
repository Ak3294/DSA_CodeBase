#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &a, int key)
    {
        int start = 0;
        int end = a.size() - 1;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (a[mid] == key)
            {
                return mid;
            }

            if (a[start] <= a[mid])
            {
                if (key >= a[start] && key <= a[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if (key >= a[mid] && key <= a[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
int main()
{
}