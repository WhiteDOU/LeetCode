#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto& num:nums)
            ans^=num;
        return ans;
    }
};
int main() {
    int a[7]={2,3,3,4,4,5,5};
    vector<int> test(a,a+7);
    Solution b;
    cout<<b.singleNumber(test);
    return 0;
}