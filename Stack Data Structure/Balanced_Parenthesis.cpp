#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    stack<char> stk;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        // Agar character is type of open bracket then push into the stack
        if (ch == '[' || ch == '(' || ch == '{')
        {
            stk.push(ch);
        }
        else
        {
            if (!stk.empty())
            {
                int top = stk.top();
                if (ch == ']' && top == '[' || ch == '}' && top == '{' || ch == ')' && top == '(')
                {
                    stk.pop();
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }
    if (!stk.empty())
    {
        cout << "Expression is Not Balanced." << endl;
    }
    else
    {
        cout << "Expression is Balanced." << endl;
    }
}