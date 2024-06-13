#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m)
{
    map<int, string>::iterator it;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    // Functionality of unordered_map
    // 1. Inbuild implementation
    // 2. Time Complexity ---> O(1);
    // 3. Valid Key Datatype

    unordered_map<int, string> m;
    m[1] = "Aadrash Pandaya"; // O(1);
    m.insert({60, "Dhruv Jain"});
    m[18] = "Akshay Kumar Hiran";
    m[6] = "Abhay Pratap Singh Chouhan";
    print(m);
}