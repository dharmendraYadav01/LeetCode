class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>result;
        int j=0;
        result.push_back(first);
        for(int i=0;i<encoded.size();i++){
            if(j<result.size()){
                result.push_back(encoded[i]^result[j++]);
            }
        }
        return result;
    }
};