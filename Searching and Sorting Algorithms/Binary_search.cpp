#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>nums,int target){
    int start = 0;
    int end = nums.size()-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;

}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7,8,9,11,21,43,44,95};
    int target;
    cin>>target;
    int index = BinarySearch(nums,target);
    cout<<index<<endl;

}