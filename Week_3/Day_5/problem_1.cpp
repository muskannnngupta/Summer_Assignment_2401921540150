#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
public:
    stack<int> st1, st2;

    MyQueue() {
        
    }

    void push(int x) {
        st1.push(x);
    }

    int pop() {
        peek();
        int val = st2.top();
        st2.pop();
        return val;
    }

    int peek() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }

    bool empty() {
        return st1.empty() && st2.empty();
    }
};

int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    cout << q.peek() << endl;
    cout << q.pop() << endl;
    cout << boolalpha << q.empty() << endl;
    return 0;
}