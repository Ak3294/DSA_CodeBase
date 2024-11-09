// Sets : Collection of some similar kind of elements.
// Sets are store unique elements in the sets same as maps.
#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}
void show(set<string> &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}

int main()
{
    set<string> s;
    s.insert("Akshay"); // log(N)
    s.insert("Kumar");
    s.insert("Hiran");

    auto it = s.find("Akshay");
    if (it == s.end())
    {
        cout << "String is Not present in the sets" << endl;
    }
    else
    {
        cout << s.erase(*it) << endl;
    }
    s.erase("Kumar");
    print(s);
    show(s);
}