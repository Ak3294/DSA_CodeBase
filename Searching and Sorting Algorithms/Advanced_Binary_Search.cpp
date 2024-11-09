// // Find the first and last position of sorted array.
// // arr= {1,3,5,5,5,5,67,123,321}  where target element = 5

#include <bits/stdc++.h>
using namespace std;

int advancedBinarySearch(vector<int> nums, int target, bool getFirst)
{
    int start = 0, ans = -1;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (nums[mid] == target)
        {
            ans = mid;

            if (getFirst)
            {
                end = mid - 1; // Left hand side for finding first position
            }
            else
            {
                start = mid + 1; // Right hand side for finding last position
            }
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 5, 5, 5, 5, 67, 123, 321};
    int target = 5;

    // This function is the advanced form of Binary Search, which finds the starting and ending position of the target element;
    int firstIndex = advancedBinarySearch(nums, target, true);
    int secondIndex = advancedBinarySearch(nums, target, false);
    if (firstIndex != -1 || secondIndex != -1)
    {
        cout << firstIndex << " " << secondIndex;
    }
    else
    {
        cout << "Target Element is not present in the array" << endl;
    }
}