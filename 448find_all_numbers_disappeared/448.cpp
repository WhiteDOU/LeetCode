#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;

       for(int i=0;i<nums.size();i++)
       {
          nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
       }
       for(int i=0;i<nums.size();i++)
       {
           if (nums[i]>0)
               res.push_back(i+1);
       }
        return  res;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}