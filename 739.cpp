#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
    stack<int> temp;
    vector<int> ans(T.size(),0);
    temp.push(0);
    for(int i=1;i<T.size();i++)
    {
        while (!temp.empty()&&T[i]>T[temp.top()])
        {
            ans[temp.top()]=i-temp.top();
            temp.pop();
        }
        temp.push(i);

    }
        return ans;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}