class MinStack {
    stack<pair<long long ,long long >> check;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(check.empty())
        {
            check.push({val,val});
            return;
        }
        pair<long long,long long > final = check.top();
        if(val<final.second)
        {
            check.push({val,val});
        }
        else
        {
            check.push({val,final.second});

        }
        
    }
    
    void pop() {
        if(!check.empty())
        {
            check.pop();
        }
    }
    
    int top() {
        if(!check.empty())
        {
            return (check.top()).first;
            
        }
       else
        {
            return -1;
        }
    }
    
    int getMin() {
        if(!check.empty())
        {
            return (check.top()).second;
            
        }
         else
        {
            return -1;
        }
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