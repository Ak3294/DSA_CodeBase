#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    s.insert("Hiran"); // O(1)
    s.insert("Kumar");
    s.insert("Akshay");

    for (auto values : s)
    {
        cout << values << endl;
    }
}