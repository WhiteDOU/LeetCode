#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1&&nums[0]==1)
            return 1;
        if(nums.size()==1&&nums[0]==0)
            return 0;
        int ans=0;
        int temp;
        if(nums[0]==0)
            temp=0;
        if(nums[0]==1)
            temp=1;
        for(int i=1;i<nums.size();i++)
        {
            if (nums[i]==1)
            {
                temp++;
                ans=max(ans,temp);
            }
            else if(nums[i]==0)
            {
                ans=max(temp,ans);

                temp=0;
            }
        }
        return ans;
    }
};
int main() {
    int a[6]={1,1,0,1,1,1};
    vector<int> test(a,a+6);
    Solution b;
    cout<<b.findMaxConsecutiveOnes(test);
}