
#include<bits/stdc++.h>
using namespace std;


// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[],int n) {
    if (n == 0) return -1;

    int jumps = 0;
    int currentJumpEnd = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + arr[i]);
        if (i == currentJumpEnd) {
            jumps++;
            currentJumpEnd = farthest;
        }
        if (currentJumpEnd >= n - 1) break; // If we can already reach the end, no need to iterate further
    }

    if (currentJumpEnd < n - 1) return -1; // If we can't reach the end, return -1
    return jumps;
}
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

