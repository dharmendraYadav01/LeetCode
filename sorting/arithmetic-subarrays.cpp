class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>answer;
        int i=0;
        while(i<l.size() && i<r.size()){
            vector<int>result;
            for(int j=l[i];j<=r[i];j++){
                result.push_back(nums[j]);
            }
            sort(result.begin(),result.end());
            bool flag=false;
            for(int k=1;k<result.size()-1;k++){   
                if(abs(result[k]-result[k-1])!=abs(result[k+1]-result[k])){
                    flag=true;
                    answer.push_back(false);
                    break;
                }
            }
            if(!flag){
                answer.push_back(true);
            }
               
            i++;
        }
        return answer;
    }
};