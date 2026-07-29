class Solution {
public:
    int findNumbers(vector<int>& nums) {
        //Approch 1
        int count=0;
        for(auto it:nums){
            string len=to_string(it);
            if(len.size()%2==0){
                count++;
            }
        }
        return count;
        // Approch 2
        // int even=0;
        // for(auto it:nums){
        //     int count=0;
        //     while(it){
        //         it/=10;
        //         count++;
        //     }
        //     cout<<count<<endl;
        //     if(count%2==0){
        //         even++;
        //     }
            
        // }
        // return even;
    }
};