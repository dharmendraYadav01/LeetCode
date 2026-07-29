class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        st.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            int n=nums[i];
            // if(!st.empty() && gcd(st.top(),nums[i])>1){
            //     int n=lcm(st.top(),nums[i]);
            //     st.pop();
            // }
            while(!st.empty() && gcd(st.top(),n)>1){
                n=lcm(st.top(),n);
                st.pop();
            }
            st.push(n);
                
        }
        vector<int>result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};