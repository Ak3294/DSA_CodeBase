// Problem : Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

#include <bits/stdc++.h>
using namespace std;

// With the O(N^2) Time Complexity
int Count_pair(int arr[], int N, int sum)
{

    int count = 0;
    if (N >= 2)
    {
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] + arr[j] == sum)
                {
                    count++;
                }
            }
        }
    }
    else
    {
        count = 0;
    }
    return count;
}

// With the O(N) Time Complexity
int getPairsCount(int arr[], int N, int K)
{
    unordered_map<int, int> countMap; // To store the frequency of each number encountered
    int countPairs = 0;               // To keep track of the number of valid pairs

    for (int i = 0; i < N; ++i)
    {
        int complement = K - arr[i];

        // Check if the complement exists in the map
        if (countMap.find(complement) != countMap.end())
        {
            countPairs += countMap[complement];
        }

        // Update the map with the current element
        countMap[arr[i]]++;
    }

    return countPairs;
}
int main()
{
    int N, sum;
    cout << "Enter the Size of the Array :";
    cin >> N;
    int arr[N];
    ;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Sum of the Pair:";
    cin >> sum;

    int ans = Count_pair(arr, N, sum);
    cout << "No. of Pairs is :" << ans << endl;
}
