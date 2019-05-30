#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        bool ans = false;
        stack<char> S_test;
        stack<char> T_test;

        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '#') {
                if (!S_test.empty())
                    S_test.pop();
            } else
                S_test.push(S[i]);
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i]=='#')
            {
                if(!T_test.empty())
                    T_test.pop();
            } else
                T_test.push(T[i]);
        }
        return S_test==T_test;
    }
};

int main() {

    return 0;
}