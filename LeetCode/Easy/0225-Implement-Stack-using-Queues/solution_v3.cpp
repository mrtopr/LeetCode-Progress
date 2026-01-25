class MyStack {
public:
 queue<int> queue;

    MyStack() {
       
    
    }
    
    void push(int x) {
       int n = queue.size();
        queue.push(x);
        for(int i=0;i<n;i++){
            queue.push(queue.front());
            queue.pop();
        }
    }
    
    int pop() {
        if(!queue.empty()){
            int a = queue.front();
            queue.pop();
            return a;
        }
        return -1;
        
    }
    
    int top() {
        return queue.front();
    }
    
    bool empty() {
        return queue.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */