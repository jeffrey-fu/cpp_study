// https://leetcode-cn.com/problems/min-stack/

#include <iostream>
#include <stack>
using namespace std;

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */

class MinStack {
private:
    stack<int> s;
    int minItem;
public:
    /** initialize your data structure here. */
    MinStack() {
        minItem = INT_MAX;
    }

    void push(int x) {
        s.push(minItem);
        if (minItem > x) {
            minItem = x;
        }
        s.push(x);
    }

    void pop() {
        s.pop();
        minItem = s.top();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int min() {
        return minItem;
    }
};

int main() {
    MinStack ms;
    ms.push(1);
    ms.push(8);
    ms.push(12);
    ms.pop();
    cout << ms.min() << endl;
    return 0;
}
