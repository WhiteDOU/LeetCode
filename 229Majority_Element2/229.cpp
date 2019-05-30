#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int> &nums) {
        int n1 = INTMAX_MAX, n2 = INTMAX_MAX;
        int c1 = 0, c2 = 0;
        vector<int> ans;

        if (nums.size() == 0)
            return ans;
        if (nums.size() == 1) {
            ans.push_back(nums[0]);
            return ans;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == n1)
                c1++;
            else if (nums[i] ==n2)
                c2++;
            else if (c1 == 0) {
                n1 = nums[i];
                c1 = 1;
            } else if (c2 == 0) {
                n2 = nums[i];
                c2 = 1;
            } else{
                --c1;
                --c2;
            }

        }
        c1=0;c2=0;
        for (int i = 0; i <nums.size() ; ++i) {
            if (nums[i]==n1)
                c1++;
            else if(nums[i]==n2)
                c2++;

        }
        if(c1>nums.size()/3) ans.push_back(n1);
        if(c2>nums.size()/3) ans.push_back(n2);
        return ans;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}