class Solution {
public:
    // int greater(vector<long long>&result,long long k){
    //     int count=0;
    //     for(auto it:result){
    //         if(it>=k){
    //             count++;
    //         }
    //     }
    //     return count;
    // }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int count=0;
        vector<int>ans;
        int left_init=0;
        int right_init=potions.size()-1;
        int ps=potions.size();
        for(int it:spells){
            int left=left_init;
            int right=right_init;
            while(left<=right){
                int mid=left+(right-left)/2;
                if((long long)it*potions[mid]<success){
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
            ans.push_back(ps-(right+1));
            // vector<long long>result(potions.size());
            // for(int i=0;i<potions.size();i++){
            //     result[i]=1LL * potions[i]*it;
            // }
            // count=greater(result,success);
            // ans.push_back(count);
        }
        return ans;
    }
};