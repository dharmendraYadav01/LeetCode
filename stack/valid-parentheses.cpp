class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        char a;
        for(int i=0;i<n;i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
                continue;
            }
            if(st.empty()){
                return false;
            }
            if(!st.empty()){
                switch (s[i]){
                    case '}':
                        a=st.top();
                        st.pop();
                        if(a=='(' || a=='['){
                            return false;
                        }
                        break;
                    
                    case ']':
                        a=st.top();
                        st.pop();
                        if(a=='(' || a=='{'){
                            return false;
                        }
                        break;
                    
                    case ')':
                        a=st.top();
                        st.pop();
                        if(a=='{' || a=='['){
                            return false;
                        }
                        break;
                }
            }
        }
        return st.empty();
    }
};