#include<bits/stdc++.h>
using namespace std;

int main(){

    /* TASK-1 : Simple way to print the Vector */

    // vector<int> v = {2,3,4,7,6,9};
    // for(int  i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


    /* TASK-02 : Using Iterator print the vector */

    // vector<int>:: iterator it = v.begin(); 
    /* Note *: This complete statement is replace with the auto keyword.*/
    // for(auto it = v.begin();it!=v.end();++it){
    //     cout<<(*it)<<endl;
    // }


    vector<pair<int,int>>vp = {{1,2},{3,4},{6,7},{3,1},{5,4}};
    vector<pair<int,int>> :: iterator it;

    for(auto it=vp.begin(); it!=vp.end();++it){
        cout<<((*it).first)<<" "<<((*it).second)<<endl;
    }

    // We Can Write using -> method

    for(auto it=vp.begin(); it!=vp.end();++it){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    
    // (*it).first is same as (it->first)
}