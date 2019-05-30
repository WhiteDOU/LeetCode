#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findNumberOfLIS(vector<int> &nums) {

        if (nums.size() == 0)
            return 0;
        int flag = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1])
                flag = 0;
        }
        if (flag == 1)
            return nums.size();
        int ans = 1;
        int cur = 1;
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                cur += 1;
                if (cur > ans)
                    count = 1;
            } else {
                if (cur == ans)
                    count++;

            }
        }
        return count;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}