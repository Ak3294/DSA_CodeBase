#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

// Step-1: Create a Vector in which we will take number Array and target element as a Parameter. 
    vector<int> twoSum(vector<int>& nums, int target) {
// Step-2: Make a variable result for store result.
    vector<int>result;

// Step-3: First iterating the array
        for(auto i1=nums.begin();i1!=nums.end();i1++){
            auto i2=find(i1+1,nums.end(),target-*i1);
            if(i2!=nums.end()){
                result.push_back(i1-nums.begin());
                result.push_back(i2-nums.begin());
                break;
            }
        }
        return result;
    }
};

int main()
{
   
}