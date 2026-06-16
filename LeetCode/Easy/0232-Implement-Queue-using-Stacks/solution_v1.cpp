class MyQueue {
public:
    vector<int> Queue;

    MyQueue() {}

    void push(int x) {
        Queue.push_back(x); 
    }

    int pop() {
        int val = *Queue.begin();   
        Queue.erase(Queue.begin()); 
        return val;
    }

    int peek() {
        return *Queue.begin();
    }

    bool empty() {
        return Queue.empty(); 
    }
};
