class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>result;
        for(int it:order){
            if(find(friends.begin(),friends.end(),it)!=friends.end()){
                result.push_back(it);
            }
        }
        return result;
    }
};