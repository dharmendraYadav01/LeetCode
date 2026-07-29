class Solution {
public:
    int find_max(vector<int>&result,int idx){
        int val=result[idx];
        int count=-1;
        int n=result.size();
        for(int i=0;i<result.size();i++){
            int j=(idx+i)%n; // condition for rotating 
            if(result[j]>val){
                count=result[j];
                break;
            }
        }
        return count;
    }
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>result;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=find_max(nums,i);
            result.push_back(count);
        }
        return result;
    }
};