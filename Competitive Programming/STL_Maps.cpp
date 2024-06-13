#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>mp;
    mp[1] = "Akshay";
    mp[2] = "Pawan";
    mp[3] = "Pankaj";

    mp.insert({4,"afg"});
    map<int,string> :: iterator it;
    for(it = mp.begin();it!=mp.end(); it++){
        cout<<((*it).first) <<" "<<((*it).second);
        cout<<endl;
    }
}