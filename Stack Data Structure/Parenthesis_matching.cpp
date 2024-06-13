// This is Very Important stack related Problem which is asked in Many Interviews.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool ispar(string x)
    {
        stack<int> s;
        for (int i = 0; i < x.size(); i++)
        {
            char ch = x[i];

            if (ch == '(' || ch == '[' || ch == '{')
            {
                s.push(ch);
            }
            else
            {
                if (!s.empty())
                {
                    char top = s.top();
                    if (ch == ')' && top == '(' || ch == ']' && top == '[' || ch == '}' && top == '{')
                    {
                        s.pop();
                    }
                    else
                        return false;
                }
                else
                {
                    return false;
                }
            }
        }
        if (s.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "Expression is Balanced." << endl;
        else
            cout << "Expression is Not Balanced." << endl;
    }
}