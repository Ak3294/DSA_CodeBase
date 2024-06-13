#include <bits/stdc++.h>

using namespace std;


class Solution{
public:
    // The main function that returns the arrangement with the largest value as
    // string.
    // The function accepts a vector of strings
    static bool compare(string a, string b) {
        string ab = a + b;
        string ba = b + a;
        return ab > ba;
    }

    string printLargest(int n ,vector<string>& nums) {
        sort(nums.begin(), nums.end(), compare);
        if (nums[0] == "0") return "0"; // Special case if the largest number is 0
        string result="";
        for (const string& num : nums) {
            result += num;
        }
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";
    }
    return 0;
}
