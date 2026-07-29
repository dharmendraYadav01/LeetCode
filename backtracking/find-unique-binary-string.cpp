class Solution {
public:
    int convert(string s){
        int decimal=0;
        int base=1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                decimal+=base;
            }
            base*=2;
        }
        return decimal;
    }
    string tobinary(int i,int size){
        string s="";
        while(i>0){
            s+=(i%2)+'0';
            i/=2;
        }
        while(s.size()<size) s+='0';
        reverse(s.begin(),s.end());
        return s;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<int>result;
        int size=nums[0].size();
        for(int i=0;i<nums.size();i++){
            result.push_back(convert(nums[i]));
        }
        sort(result.begin(),result.end());
        int i=0;
        while(true){
            if(find(result.begin(),result.end(),i)==result.end()){
                return tobinary(i,size);
            }
            i++;
        }
        // cout<<i;
        // for(int it:result){
        //     cout<<it<<" ";
        // }
        return "";
    }
};