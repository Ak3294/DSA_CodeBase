

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
  unordered_map<int,string>m;
  m[1]="Akshay Kumar Hiran";
  m[5]="Narendra";
  m[3]="Pawan Hiran";
  for(auto pr : m){
    cout<<pr.first<<" "<<pr.second<<endl;
  }
return 0;
}