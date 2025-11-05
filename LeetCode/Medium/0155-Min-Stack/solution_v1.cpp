class MinStack {
public:
vector <int> stack;
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
       return stack.back();
    }
    
    int getMin() {
        int min = INT_MAX;
        for(int i : stack){
           
            if(min>i) min = i;
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