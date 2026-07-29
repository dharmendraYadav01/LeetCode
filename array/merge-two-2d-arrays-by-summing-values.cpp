class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int>result;
        for(auto &item:nums1){
            result[item[0]]+=item[1];
        }
        for(auto &item:nums2){
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