// Maps is the data structure, which is store key-value pair.
// In Normal maps data stored in sorted order and this type of order is implimented in Red-Black Tree(self balancing tree).
// In which store unique value.
// Time complexity of Insertion and show the map is O(log(n)).

#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    map<int, string>::iterator it;
    for (auto &pr : m)
    {
        // Always print in sorted order.
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "Aadrash Pandaya"; // O(log(n));
    m.insert({60, "Dhruv Jain"});
    m[18] = "Akshay Kumar Hiran";
    m[6] = "Abhay Pratap Singh Chouhan";
    // Some inbuid functions over map
    // auto it = m.find(7);
    // if(it!=m.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // else{
    //     cout<<"No Value"<<endl;
    // }
    // m.erase(it);
    print(m);
    m.clear();
    cout << "Data Cleared Successfully" << endl;
}