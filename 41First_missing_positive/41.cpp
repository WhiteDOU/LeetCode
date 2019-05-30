#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            while (nums[i]>0&&nums[i]<=nums.size()&&nums[i]!=i+1&&nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
        }
        if(nums.size()==0)
            return 1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }
        return ans+1;
    }
};
int main() {
    int a[4]={1,2,3,4};
    vector<int> test(a,a+4);
    Solution ans;
    cout<<ans.firstMissingPositive(test);
    return 0;
}