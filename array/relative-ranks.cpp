class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>copy=score;
        sort(score.rbegin(),score.rend());
        vector<string>ans;
        unordered_map<int,int>vec;
        for(int i=0;i<score.size();i++){
            vec[score[i]]=i+1;
        }
        for(int i=0;i<copy.size();i++){
            if(vec[copy[i]]==1){
                ans.push_back("Gold Medal");
            }
            else if(vec[copy[i]]==2){
                ans.push_back("Silver Medal");
            }
            else if(vec[copy[i]]==3){
                ans.push_back("Bronze Medal");
            }
            else{
                ans.push_back(to_string(vec[copy[i]]));
            }

        }
        return ans;
    }
};