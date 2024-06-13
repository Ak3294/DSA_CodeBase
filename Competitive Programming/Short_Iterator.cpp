#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2,4,1,7,8,4};
    for(int &i : v){
        i++;
        // cout<<i<<" ";
    }
    cout<<endl;

    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    // Where 'i' is the copy of v[i];

    vector<pair<int,int>> v_p = {{1,2},{3,4}};
    for(pair<int,int> i : v_p){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }
}