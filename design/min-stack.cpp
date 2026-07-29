class MinStack {
public:
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        int a=st.top();
        return a;
    }
    
    int getMin() {
        vector<int>r;
        while(!st.empty()){
            r.push_back(st.top());
            st.pop();
        }
        for(int i=r.size()-1;i>=0;i--){
            st.push(r[i]);
        }
        sort(r.begin(),r.end());
        return r[0];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */