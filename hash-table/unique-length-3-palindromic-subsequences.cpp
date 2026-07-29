class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char>letters;
        for(int i=0;i<s.length();i++){
            letters.insert(s[i]);
        }
        int res=0;

        for(char it:letters){
            int left_idx=-1;
            int right_idx=-1;
            for(int i=0;i<s.length();i++){
                if(s[i]==it){
                    if(left_idx==-1){
                        left_idx=i;
                    }
                    right_idx=i;
                }
            }
            unordered_set<char>unique;
            for(int middle=left_idx+1;middle<=right_idx-1;middle++){
                unique.insert(s[middle]);
            }
            res+=unique.size();
        }
        return res;
    }
};