class KthLargest {
public:
    int n=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    // vector<int>result;
    KthLargest(int k, vector<int>& nums) {
        this->n=k;
        for(int it:nums){
            pq.push(it);
            if(pq.size()>k) pq.pop();
        }
        // result=nums;
        // n=k;
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>n) pq.pop();
        return pq.top();
        // result.push_back(val);
        // sort(result.begin(),result.end());
        // // int ans=result[n-1];
        // // result.erase(result.begin()+n-1);
        // return result[result.size()-n];
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */