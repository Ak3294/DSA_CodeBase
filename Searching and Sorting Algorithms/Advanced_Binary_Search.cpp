// Find the first and last position of sorted array.
//   arr= {1,3,5,5,5,5,67,123,321}  where target element = 5

#include <iostream>
#include <vector>
using namespace std;

int getIndex(vector<int> &nums, int target, bool getFirst)
{
    int start = 0, ans = -1;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (nums[mid] == target)
        {
            ans = mid;

            if (getFirst)
            {
                end = mid - 1; // Left hand side for finding first position
            }
            else
            {
                start = mid + 1; // Right hand side for finding last position
            }

        }
        else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
        
}
int main()
{
    vector<int> v(2,-1);
    vector<int>input;

    int n,i,firstIndex, lastIndex,targetVal,placeHolder;
    cout<<"Enter the Number of Element of an Array";
    cin>>n;
    cout<<"Enter the Sorted Array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>placeHolder;
        input.push_back(placeHolder);
    }
    cout<<"Enter the Element which have to find the first and last index ";
    cin>>targetVal;

    firstIndex = getIndex(input,targetVal,true);
    if(firstIndex==-1){
        cout<<"Element does not present in the Array"<<endl;
        exit(0);
    }
    else{
        v[0]=firstIndex;
    }
    lastIndex = getIndex(input,targetVal,false);
    if(lastIndex==-1){
        cout<<"Element does not present in the Array"<<endl;
        exit(0);
    }
    else{
        v[1]=lastIndex;
    }
    cout<<"First Index :"<<v[0]<<endl;
    cout<<"Last Index :"<<v[1]<<endl;
}