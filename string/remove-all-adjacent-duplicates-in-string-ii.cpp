class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(char c:s){
            if(!st.empty() && st.top().first==c){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
            else{
                st.push({c,1});
            }
        }
        string result="";
        while(!st.empty()){
            auto it=st.top();
            st.pop();
            result.append(it.second,it.first);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};