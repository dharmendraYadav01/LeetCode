class Solution {
public:
    bool isIncrease(vector<int>&temp){
        for (int i = 1; i < temp.size(); i++) {
            if (temp[i] <= temp[i-1]) return false; 
        }
        return true;
    }
    // bool isDecrease(vector<int>&temp){
    //     for (int i = 1; i < temp.size(); i++) {
    //         if (temp[i] >= temp[i-1]) return false; 
    //     }
    //     return true;
    // }
    bool areNumbersAscending(string s) {
        vector<int>result;
        for(int i=0;i<s.length();){
            int j=i;
            string res="";
            while(isdigit(s[j])){
                res+=s[j];
                j++;
            }
            int num=0;
            for(auto c:res){
                num=num*10+(c-'0');
            }
            if(num!=0){
                result.push_back(num);
            }
            i=j+1;
        }
        if(isIncrease(result)) return true;
        return false;
    }
};