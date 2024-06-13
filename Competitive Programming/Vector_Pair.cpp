#include<iostream>
using namespace std;

int main(){
    // Pair in Vectors
    pair<int,string> p;
    p = {2,"Dhruv"};
    // p = make_pair(2,"Akshay");
    pair<int,string>p1 = p;
    p1.first=45;
    p1.second = "Pankaj";

    cout<<p.first<< " "<<p.second<<endl;
    cout<<p1.first<< " "<<p1.second<<endl;

    // Array of Pairs
    int a[] = {1,2,3};
    int b[] = {4,5,6};
    pair<int,int>p_array[3];
    p_array[0] = {1,4};
    p_array[1] = {2,5};
    p_array[2] = {3,6};
    // Swap the pair
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<< " "<<p_array[i].second<<endl;
    }
    
}