#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {43, 22, 11, 56, 34, 78, 54, 98};
    BubbleSort(nums);
}
