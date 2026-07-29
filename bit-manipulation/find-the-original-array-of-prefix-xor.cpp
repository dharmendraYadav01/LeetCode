class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>result;
        result.push_back(pref[0]);
        int i=0,j=i+1;
        while(i!=j && i<pref.size() && j<pref.size()){
            result.push_back(pref[i++]^pref[j++]);
        }
        return result;
    }
};