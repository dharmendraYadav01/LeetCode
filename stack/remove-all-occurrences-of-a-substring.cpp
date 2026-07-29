class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        int m=part.length();
        for(auto c:s){
            st.push(c);
            if(st.size()>=m){
                string res="";
                stack<char>copy=st;
                for(int i=0;i<m;i++){
                    res+=copy.top();
                    copy.pop();
                }
                reverse(res.begin(),res.end());
                if(res==part){
                    for(int i=0;i<m;i++){
                        st.pop();
                    }
                }
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};