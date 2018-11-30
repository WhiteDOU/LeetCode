#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;

        vector<int> fMax(nums.size());
        fMax[0] = nums[0];
        vector<int> fMin(nums.size());
        fMin[0] = nums[0];

        for(size_t i = 1 ; i < nums.size() ; i++){
            fMax[i] = max( max(fMax[i-1] * nums[i],fMin[i-1] * nums[i]), nums[i]);
            fMin[i] = min( min(fMax[i-1] * nums[i],fMin[i-1] * nums[i]), nums[i]);
        }

        int a  = *max_element(fMax.begin(),fMax.end());
        int b =  *min_element(fMin.begin(),fMin.end());
        return max(a,b);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}