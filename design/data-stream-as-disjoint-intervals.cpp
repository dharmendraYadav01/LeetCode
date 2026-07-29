class SummaryRanges {
public:
    

    unordered_set<int>s;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        s.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>ans;
        vector<int>result(s.begin(),s.end());
        sort(result.begin(),result.end());
        int j=0;
        for(int i=0;i<result.size();){
            j=i;
            while(j<result.size()-1 && result[j]+1==result[j+1]){
                j++;
            }
            ans.push_back({result[i],result[j]});
            i=j+1;
        }
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */