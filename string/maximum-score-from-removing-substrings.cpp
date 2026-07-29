class Solution {
public:
    void fill(stack<char>&st,string &res){
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
    }
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int sum=0;
        string res="";
        if(x>y){
            for(auto c:s){
                if(!st.empty() && st.top()=='a' && c=='b'){
                    st.pop();
                    sum+=x;
                }
                else{
                    st.push(c);
                }
            }
            fill(st,res);
            stack<char>st1;
            if(res.find("ba")!=string::npos){
                for(auto c:res){
                    if(!st1.empty() && st1.top()=='b' && c=='a'){
                        st1.pop();
                        sum+=y;
                    }
                    else{
                        st1.push(c);
                    }
                }
            }
        }
        else{
            for(auto c:s){
                if(!st.empty() && st.top()=='b' && c=='a'){
                    st.pop();
                    sum+=y;
                }
                else{
                    st.push(c);
                }
            }
            fill(st,res);
            stack<char>st1;
            if(res.find("ab")!=string::npos){
                for(auto c:res){
                    if(!st1.empty() && st1.top()=='a' && c=='b'){
                        st1.pop();
                        sum+=x;
                    }
                    else{
                        st1.push(c);
                    }
                }
            }
        }
        return sum;
    }
};