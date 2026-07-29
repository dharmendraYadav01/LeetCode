class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int min_idx=INT_MAX;
        vector<string>result;
        int min_val_idx=0;
        for(int i=0;i<list1.size();i++){
            auto it=find(list2.begin(),list2.end(),list1[i]);
            if(it!=list2.end()){
                min_val_idx=i+(it-list2.begin());
                if(min_idx>min_val_idx){
                    min_idx=min_val_idx;
                    result.clear();
                    result.push_back(list1[i]);
                }
                else if(min_idx==min_val_idx){
                    result.push_back(list1[i]);
                }
            }
        }
        return result;
    }
};