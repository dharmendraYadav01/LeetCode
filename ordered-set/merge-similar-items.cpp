class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int,int>result;
        for(auto &item:items1){
            result[item[0]]+=item[1];
        }
        for(auto &item:items2){
            result[item[0]]+=item[1];
        }
        vector<vector<int>>answer;
        for(auto &[key,val]:result){
            answer.push_back({key,val});
        }
        sort(answer.begin(),answer.end());
        return answer; 
    }
};