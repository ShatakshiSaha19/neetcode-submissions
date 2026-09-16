class MinStack {
public:
    stack<int>st;
    int mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else{
            if(val>mini)st.push(val);
            else {
                st.push(2*val -mini);
                mini=val;
            }
        }
        
    }
    
    void pop() {
        if(st.empty())return;
        int n=st.top();
        st.pop();
        if(n<mini)mini=2*mini -n;
        
    }
    
    int top() {
        if(st.empty())return -1;
       int  n=st.top();
        if(mini<n)return n;
        return mini;

        
    }
    
    int getMin() {
        return mini;
    }
};
