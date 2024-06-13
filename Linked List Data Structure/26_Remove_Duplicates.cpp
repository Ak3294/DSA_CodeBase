#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> original;
        vector<int>::iterator i;
        for (i = nums.begin(); i != nums.end(); i++)
        {
            int element = *i;
            if (find(original.begin(), original.end(), element) != original.end())
            {
                nums.erase(i);
                i--;
            }
            else
            {
                original.push_back(*i);
            }
        }
        return nums.size();
    }
};
int main()
{
    
}
