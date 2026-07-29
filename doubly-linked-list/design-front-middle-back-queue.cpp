class FrontMiddleBackQueue {
public:
    deque<int>dq;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        dq.push_front(val);
    }
    
    void pushMiddle(int val) {
        int n=dq.size()/2;
        dq.insert(dq.begin()+n,val);
        
    }
    
    void pushBack(int val) {
        dq.push_back(val);
    }

    int popFront() {
        if(!dq.empty()){
            int front=dq.front();
            dq.pop_front();
            return front;
        }
        return -1;
    }
    
    int popMiddle() {
        if(!dq.empty()){
            int n=(dq.size()-1)/2;
            int middle=dq[n];
            dq.erase(dq.begin()+n);
            return middle;
        }
        return -1;
    }
    
    int popBack() {
        if(!dq.empty()){
            int back=dq.back();
            dq.pop_back();
            return back;
        }
        return -1;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */