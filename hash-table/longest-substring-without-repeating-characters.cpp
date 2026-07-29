class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int i=0;
        int j=0;
        int temp=0;
        while(i<s.length()){
            if(st.find(s[i])==st.end() || st.empty()){
                st.insert(s[i]);
                temp=max(temp,(int)st.size());
                i++;
            }
            else{
                st.erase(s[j]);
                j++;
            }
            
        }
        return temp;
    }
};