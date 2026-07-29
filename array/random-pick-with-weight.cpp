class Solution {
public:
    vector<int>prefix;
    int total=0;
    Solution(vector<int>& w) {
        prefix.resize(w.size());
        prefix[0]=w[0];
        for(int i=1;i<w.size();i++){
            prefix[i]=prefix[i-1]+w[i];
        }
        total=prefix.back();
    }
    int pickIndex() {
        int rnd=rand()%total+1; // rand=[0,total] random value if +1(becoz prefix sum start from idx 1) then [1,rand_max+1]
        // lower_bound(prefix.begin(),prefix.end(),rnd) ---> it give itertor pointing to that value greater than or equal to rnd and if this value subtract by this prefix.begin() then it give integral value
        return lower_bound(prefix.begin(),prefix.end(),rnd)-prefix.begin();   
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */