class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    unordered_set<int>s;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            q.push(i);
            s.insert(i);
        }

    }
    
    int popSmallest() {
        int ans;
        if(!q.empty()){
            ans=q.top();
            q.pop();
            s.erase(ans);
         }
        return ans;
    }
    
    void addBack(int num) {
        
        if(s.find(num)==s.end()){
            q.push(num);
            s.insert(num);
        }
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */