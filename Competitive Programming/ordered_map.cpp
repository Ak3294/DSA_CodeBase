#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Akshay Kumar Hiran";
    m[5] = "Narendra Hiran";
    m[3] = "Pawan Hiran";
    map<int, string>::iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    // find() return an iterator which find the key-value pair of the given key.
    auto it = m.find(3);
    m.erase(it);
    // if(it==m.end()) cout<<"No Result";
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}