#include<bits/stdc++.h>
using namespace std;

int main(){
    int target,i;
    cin>>target;
    vector<int>nums = {32,45,66,768,8965,5743,4675,656545};
    for(i=0;i<nums.size();i++){
        if(nums[i]==target){
            break;
        }
    }
    cout<<"Element Present at index "<<i<<endl;
}