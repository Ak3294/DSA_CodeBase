#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	void segregateElements(int arr[], int n)
	{
		vector<int> ans;
		for (int i = 0; i < n; i++)
			if (arr[i] >= 0)
				ans.push_back(arr[i]);
		for (int i = 0; i < n; i++)
			if (arr[i] < 0)
				ans.push_back(arr[i]);
		for (int i = 0; i < n; i++)
			arr[i] = ans[i];
	}
};
int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		Solution ob;
		ob.segregateElements(a, n);

		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
