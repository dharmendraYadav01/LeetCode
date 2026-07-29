class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        vector<int>res;
        for(int i=0;i<operations.size();i++){
            if(isdigit(operations[i][0]) || (operations[i][0]=='-' && operations.size()>1)){
                int num=stoi(operations[i]);
                s.push(num);
            }else if(operations[i]=="+"){
                int sum=s.top();
                int dup=sum;
                s.pop();
                sum+=s.top();
                s.push(dup);
                s.push(sum);
            }else if(operations[i]=="D"){
                int dob=2*s.top();
                s.push(dob);
            }else if(operations[i]=="C"){
                s.pop();
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};