class MinStack {
    int i;
    vector<int> s;

public:
    MinStack() {
        i = -1;
    }
    
    void push(int val) {
        s.push_back(val);
        i++;
    }
    
    void pop() {
        s.pop_back();
        i--;
    }
    
    int top() {
        return s[i];
    }
    
    int getMin() {
        int min = s[0];
        for(int e: s){
            min = min>e? e:min;
        }
        return min;
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