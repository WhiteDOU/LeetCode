#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if(ans.empty())
        return ans;
    int m=matrix.size();
    int n=matrix[0].size();
    int times=min(m,n)/2;
    for(int i=0;i<times;i++)
    {
        for(int j=i;j<n-i-1;j++)
            ans.push_back(matrix[i][j]);
        for(int j=i;j)
    }



    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}