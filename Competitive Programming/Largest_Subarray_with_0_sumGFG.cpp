#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        unordered_map<int, int> prefixSum; // Map to store prefix sum and its index
        int maxLen = 0;
        int sum = 0;

        // Traverse the array
        for (int i = 0; i < n; i++)
        {
            sum += A[i]; // Calculate prefix sum
            if (sum == 0)
            {
                // If prefix sum is 0, update maxLen to current index + 1
                maxLen = i + 1;
            }
            else
            {
                // If prefix sum is not 0, check if it has been seen before
                if (prefixSum.find(sum) != prefixSum.end())
                {
                    // If yes, update maxLen to the maximum of current maxLen and difference of current index and previous index
                    maxLen = max(maxLen, i - prefixSum[sum]);
                }
                else
                {
                    // If prefix sum is encountered for the first time, store its index
                    prefixSum[sum] = i;
                }
            }
        }
        return maxLen;
    }
};

int main()
{
    int m;
    cin >> m;
    vector<int> array1(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> array1[i];
    }
    Solution ob;

    cout << "Length of the Subaaray is " << ob.maxLen(array1, m) << endl;
    return 0;
}
