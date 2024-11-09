#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Akshay");
    q.push("Kumar");
    q.push("Hiran");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}