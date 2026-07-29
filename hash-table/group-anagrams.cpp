class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> count;
        
        for(auto num: strs){
            string frequency = num;
            sort(frequency.begin(), frequency.end());
            count[frequency].push_back(num);
        }
        
        vector<vector<string>> ans;
        for(auto num: count){
            ans.push_back(num.second);
        }
        return ans;
    }
};