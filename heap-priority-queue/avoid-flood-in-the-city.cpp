class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n= rains.size();
        unordered_map<int,int>mp;
        set<int>st;
        vector<int>arr(n,1);
        for(int i=0;i<rains.size();i++){
            if(rains[i]==0){
                st.insert(i);
            }else{
                arr[i]=-1;
                if(mp.count(rains[i])){
                    auto it=st.lower_bound(mp[rains[i]]);
                    if(it==st.end()){
                        return {};
                    }
                    int day=*it;
                    arr[day]=rains[i];
                    st.erase(it);
                }
                mp[rains[i]]=i;  
            }
            
        }
        return arr;
    }
};