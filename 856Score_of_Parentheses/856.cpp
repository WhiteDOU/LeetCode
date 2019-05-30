#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> stk;
        int ret = 0;

       for(int i=0;i<S.size();i++)
       {
           switch (S[i])
           {
               case '(':
                   if (S[i+1]==')')
                   {
                       ret++;
                       i++;
                   }
                   else
                   {
                       stk.push(ret);
                       ret=0;
                   }
                   break;
               case ')':
                   ret*=2;
                   ret+=stk.top();
                   stk.pop();
                   break;

           }
       }
        return ret;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}