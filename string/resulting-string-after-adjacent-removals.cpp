class Solution {
public:
    string resultingString(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && abs((st.top()-'a')-(s[i]-'a'))%26==1){
                st.pop();
            }else if(!st.empty() && st.top()=='z' && s[i]=='a'){
                st.pop();
            }
            else if(!st.empty() && st.top()=='a' && s[i]=='z'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            // cout<<st.top();
            st.pop();
        }
        // for(int i=0;i<ans.length()-1;i++){
        //     if(ans[i]=='a' && ans[i+1]=='z'){
        //         ans.erase(i,2);
        //         break;
        //     }
        //     if(ans[i]=='z' && ans[i+1]=='a'){
        //         ans.erase(i,2);
        //         break;
        //     }
        // }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};