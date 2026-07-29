class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        int n=nums.size();
        vector<int>result(n);
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        int i=0,j=0;
        int e=0,o=1;
        while(i<even.size() && e<result.size()){
            result[e]=even[i];
            e=e+2;
            i++;
        }
        while(j<odd.size() && o<result.size()){
            result[o]=odd[j];
            o=o+2;
            j++;
        }
        return result;
    }
};