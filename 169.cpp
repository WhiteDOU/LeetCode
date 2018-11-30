#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int count=1;
    if(nums.size()==1)
        return nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
            count++;
        else
            count=1;
        if(count>nums.size()/2)
        {
            return nums[i];
        }
    }
    }
};
int main() {
    Solution test;
    vector<int> a1;
    a1.push_back(1);
    cout<<test.majorityElement(a1);
}