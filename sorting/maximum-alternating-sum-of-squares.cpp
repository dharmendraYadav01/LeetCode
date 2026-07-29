class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>result;
        for(int it:nums){
            result.push_back(abs(it));
        }
        sort(result.begin(),result.end());
        int i=0;
        int j=result.size()-1;
        long long even_sum=0;
        long long odd_sum=0;
        while(i<j){
            even_sum+=(result[j]*result[j]);
            odd_sum+=(result[i]*result[i]);
            j--;
            i++;
        }
        if(result.size()%2!=0){
            even_sum+=(result[(result.size()-1)/2]*result[(result.size()-1)/2]);
        }
        // for(int it:result){
        //     cout<<it<<" ";
        // }
        return even_sum-odd_sum;
    }
};