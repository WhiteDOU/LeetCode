#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> queue1;
    queue<int> queue2;

    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        queue1.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ans;
        if (queue1.size()==0)
            return false;
        while (!queue1.empty())
        {
            if(queue1.size()==1)
            {
                ans=queue1.front();
                queue1.pop();
                break;
            }
            queue2.push(queue1.front());
            queue1.pop();
        }
        while (!queue2.empty())
        {
            queue1.push(queue2.front());
            queue2.pop();
        }
        return  ans;

    }

    /** Get the top element. */
    int top() {
        int ans;
        if (queue1.size()==0)
            return false;
        while (!queue1.empty())
        {
            queue2.push(queue1.front());
            ans=queue1.front();
            queue1.pop();
        }
        while (!queue2.empty())
        {
            queue1.push(queue2.front());
            queue2.pop();
        }
        return  ans;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return queue1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}