#include<bits/stdc++.h>
using namespace std;

class Solution{
   public:
       void sol(){
          //Vectors in STL
          vector<int>v;
          int n;
          cin>>n;
          for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
          }
          cout<<"Resultant Vector is :";
          for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
          }
       }
       void printVec(vector<int>v){
           cout<<"Size :"<<v.size()<<endl;
           for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
           }
       }
};

int main(){
    Solution S;
    // S.sol();
    vector<int>v(10,3);
    // v.push_back(111); // size: 11
    // v.pop_back(); // size : 10
    // v.pop_back(); // size : 9
    // S.printVec(v);

    // copy the Vector
    vector<int>v2 = v;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

}