#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> minst;

    MinStack() {
    }
    
    void push(int value) {
        st.push(value);
        if (minst.empty() || minst.top() >= value) minst.push(value);
    }
    
    void pop() {
        if (st.top() == minst.top()) minst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};

int main() {
    MinStack ms;
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    cout << ms.getMin() << endl;
    ms.pop();
    cout << ms.top() << endl;
    cout << ms.getMin() << endl;
    return 0;
}
