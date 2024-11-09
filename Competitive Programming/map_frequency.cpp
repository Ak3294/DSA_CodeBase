/*
Given N strings, print unique strings in lexiographical order with their frequency.
N <= 10^5
|S| <= 100
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> duplicates;
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
        if (pr.second > 0)
        {
            duplicates.push_back(pr.first);
        }
    }
    sort(duplicates.begin(), duplicates.end());
    for (int i = 0; i < duplicates.size(); i++)
    {
        cout << duplicates[i] << "";
    }
}