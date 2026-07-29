class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(auto it:tokens){
            if(it != "+" && it != "-" && it != "*" && it != "/"){
                st.push(it);
            }
            if(it=="+"){
                int a=stoi(st.top()); st.pop();
                int b=stoi(st.top()); st.pop();
                st.push(to_string(a+b));
            }
            else if(it=="-"){
                int a=stoi(st.top()); st.pop();
                int b=stoi(st.top()); st.pop();
                st.push(to_string(b-a));
            }
            else if(it=="*"){
                int a=stoi(st.top()); st.pop();
                int b=stoi(st.top()); st.pop();
                st.push(to_string(a*b));
            }
            else if(it=="/"){
                int a=stoi(st.top()); st.pop();
                int b=stoi(st.top()); st.pop();
                st.push(to_string(b/a));
            }
        }
        return stoi(st.top());
    }
};