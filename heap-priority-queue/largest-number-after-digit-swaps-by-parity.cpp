class Solution {
public:
    int largestInteger(int num) {
        string nums=to_string(num);
        string even="";
        string odd="";
        while(num>0){
            int rem=num%10;
            if(rem%2==0){
                even+=(rem+'0');
            }else{
                odd+=(rem+'0');
            }
            num/=10;
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
        int e=0;
        int o=0;
        string res="";
        for(int i=0;i<nums.length();i++){
            if((nums[i]-'0')%2==0 && e<even.size()){
                res.push_back(even[e]);
                e++;
            }else if(o<odd.size()){
                res.push_back(odd[o]);
                o++;
            }
        }
        int result=0;
        for(auto &it:res){
            result=result*10+(it-'0');
        }
        return result;
    }
};