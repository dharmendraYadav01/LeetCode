class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>result(n,0);
        for(int i=1;i<n;i++){
            result[i]=result[i-1];
            if ((nums[i - 1] % 2 == 0 && nums[i] % 2 == 0) || (nums[i - 1] % 2 != 0 && nums[i] % 2 != 0)){
                result[i]++;
            }
        }
        vector<bool>ans;

        for(auto & quere:queries){
            int start=quere[0];
            int end=quere[1];
            int alter=result[end]-(start>0?result[start]:0);
            ans.push_back(alter==0);
        }


        // for(auto &quere:queries){
        //     int start=quere[0];
        //     int end=quere[1];
        //     bool res=true;
        //     for(int i=start;i<end;i++){
        //         if(nums[i]%2==nums[i+1]%2){
        //             res=false;
        //             break;
        //         }
        //     }
        //     result.push_back(res);
        // }
        return ans;
    }
};