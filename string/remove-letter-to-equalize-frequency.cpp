class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int>mp;
        for(auto it:word){
            mp[it]++;
        }
        for(auto it:mp){
            mp[it.first]--;
            // if(mp[it.first]==0){
            //     mp.erase(it.first);
            // }
            unordered_set<int>st;
            for(auto it:mp){
                if(it.second>0){
                    st.insert(it.second);
                }
            }
            if(st.size()==1){
                return true;
            }
            mp[it.first]++;
        }
        return false;
        // unordered_set<int>st;
        // int count=0;
        // for(auto it:mp){ //mp= 1 1 2
        //     int freq=it.second; // 1
        //     if(!st.empty() && st.find(freq)==st.end()){ 
        //         freq--;
        //         count++;
        //     }
        //     else{
        //         st.insert(freq);// 1
        //     }
        // }
        // return count==1?true:false;
    }
};