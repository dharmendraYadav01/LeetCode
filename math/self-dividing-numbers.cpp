class Solution {
public:
    bool isSelf(int val){
        int data=val;
        while(val){
            int rem=val%10;
            if(rem==0||data%rem!=0){
                return false;
            }
            val/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i=left;i<=right;i++){
            if(isSelf(i)){
                result.push_back(i);
            }
        }
        return result;
    }
};