#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int sum=0;
    for(int i=0;i<nums.size()/2;i++)
    {
        sum+=min(nums[2*i],nums[2*i+1]);
    }
        return sum;
    }
};
int main() {
    vector<int> test;
    int temp;
    Solution a;
    while (cin>>temp)
    {
        if(temp=0)
            break;
        test.push_back(temp);
    }
   while (!test.empty())
   {
       cout<<test.back();
       test.pop_back();
   }
    cout<<a.arrayPairSum(test);
    return 0;
}