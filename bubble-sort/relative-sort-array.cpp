class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>freq;
        for(int &it:arr1){
            freq[it]++;
        }
        vector<int>result;
        for(auto it:arr2){
            while(freq[it]-->0){
                result.push_back(it);
            }
        }
        vector<int>rem;
        for(auto it:freq){
            while(it.second-->0){
                rem.push_back(it.first);
            }
        }
        sort(rem.begin(),rem.end());
        result.insert(result.end(),rem.begin(),rem.end());
        
        // time complexity error ...............
        // vector<int>result;
        // int j=0;
        // for(int i=0;i<arr2.size();i++){
        //     int j=0;
        //     while(j<arr1.size()){
        //         if(arr1[j]==arr2[i]){
        //             result.push_back(arr1[j]);
        //         }
        //         j++;
        //     }
        // }
        // while(j<arr1.size()){
        //     result.push_back(arr1[j++]);
        // }
        return result;
    }
};