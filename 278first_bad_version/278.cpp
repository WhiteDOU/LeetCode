#include <iostream>
#include <vector>
using namespace std;
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        int mid, first;
        while (l < r) {
            mid = (l + r) / 2;
            if (isBadVersion(mid)) {
                first = mid;
                r = mid ;
            } else {
                l = mid + 1;
            }

        }
        return l;
    };
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}