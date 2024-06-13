#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool validParenthesis(string str)
{
    stack<char> stk;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            stk.push(str[i]);
        }
        else
        {
            if (stk.empty())
                return false; // More closing than opening
            char top = stk.top();
            if ((str[i] == ')' && top == '(') ||
                (str[i] == '}' && top == '{') ||
                (str[i] == ']' && top == '['))
            {
                stk.pop();
            }
            else
            {
                return false; // Mismatched opening and closing
            }
        }
    }
    return stk.empty(); // Check if there's any remaining opening parentheses
}

int main()
{
    string str;
    cin >> str;
    bool res = validParenthesis(str);
    if (res)
    {
        cout << "Valid Parenthesis";
    }
    else
    {
        cout << "Invalid Parenthesis";
    }
    return 0;
}
