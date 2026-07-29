class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        int count=0;
        unordered_set<int>st;
        for(auto it:mp){
            int freq=it.second;
            while(freq>0 && st.count(freq)){ // 4 2 4->3 6 
                freq--;
                count++;
            }
            if(freq>0){
                st.insert(freq); // 4 2 3 6
            }
        }
        return count;
    }
}; 

