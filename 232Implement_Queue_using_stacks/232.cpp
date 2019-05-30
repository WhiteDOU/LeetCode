#include <iostream>
#include <stack>
using namespace std;
class MyQueue {
private:
    stack<int> stack1;
    stack<int> stack2;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        stack1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int ans;
        if(stack1.empty())
            return false;
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        ans=stack2.top();
        stack2.pop();
        while (!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return ans;

    }

    /** Get the front element. */
    int peek() {
        int ans;
        if(stack1.empty())
            return false;
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        ans=stack2.top();
        while (!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return ans;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return stack1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}