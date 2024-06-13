#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    for (auto it : nums)
    {
        if (i == 0 || i == 1 || nums[i - 2] != it)
        {
            nums[i] = it;
            i++;
        }
    }
    return i;
}

int main()
{
    vector<int> nums;
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    int ans = removeDuplicates(nums);
    cout << ans;
}