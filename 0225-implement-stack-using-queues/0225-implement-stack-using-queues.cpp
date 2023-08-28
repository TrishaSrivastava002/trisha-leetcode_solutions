class MyStack {
    int n;
        queue<int> q1;
        queue<int> q2;
        
public:
    MyStack() {
        n=0;
    }
    
    void push(int x) {
        q2.push(x);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        int k= q1.front();
        q1.pop();
        n--;
        return k;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        return false;
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