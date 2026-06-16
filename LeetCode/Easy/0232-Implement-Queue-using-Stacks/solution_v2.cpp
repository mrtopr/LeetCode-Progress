class MyQueue {
public:
    stack<int> St1;
    stack<int> St2;

    MyQueue() {}

    void push(int x) {
       
            St1.push(x);
        
    }

    int pop() {
     if(St2.empty()){
        while(!St1.empty()){
            St2.push(St1.top());
            St1.pop();
        }
     }
     int val = St2.top();
     St2.pop();
     return  val;
      
    }

    int peek() { 
       if(St2.empty()){
        while(!St1.empty()){
            St2.push(St1.top());
            St1.pop();
        }
        return St2.top();
       }

       return  St2.top();
        }

    bool empty() { return St1.empty() && St2.empty(); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */