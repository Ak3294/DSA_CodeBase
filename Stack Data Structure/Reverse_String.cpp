#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> stk;

    for (int i = 0; i < str.size(); i++)
    {
        stk.push(str[i]);
    }
    for (int i = stk.size() - 1; i >= 0; i--)
    {
        cout << stk.top();
        stk.pop();
    }
}