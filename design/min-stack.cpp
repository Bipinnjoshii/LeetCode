class MinStack {
public:
    stack<int>st;
    stack<int>mn;
    MinStack() {
        
    }
    
    void push(int value) {
        if(mn.empty() || value <= mn.top()){
            mn.push(value);
        }
        
        st.push(value);
    }
    
    void pop() {
        if(st.top() == mn.top()){
            mn.pop();
        }
        
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */