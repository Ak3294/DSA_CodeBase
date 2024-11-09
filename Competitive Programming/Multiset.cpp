#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<string> s;
    s.insert("Hiran"); // O(log(n))
    s.insert("Kumar");
    s.insert("Akshay");
    s.insert("Akshay");

    auto it = s.find("Akshay");
    if (it != s.end())
    {
        s.erase(it); // if multiple strings are present then it will erase only first string.
    }

    for (auto values : s)
    {
        cout << values << endl;
    }
}