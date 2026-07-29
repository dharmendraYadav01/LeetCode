class Solution {
    void evaluate(stack<char>& oprt , stack<char>& operand){
        char op=oprt.top();
        oprt.pop();
        bool flag;
        if(op=='|'){
            flag=false;
            while(operand.top()!='('){
                flag|=(operand.top()=='t');
                operand.pop();
            }
            operand.pop();
        }
        else if(op=='&'){
            flag=true;
            while(operand.top()!='('){
                flag &=(operand.top()=='t');
                operand.pop();
            }
            operand.pop();
        }
        if(op=='!'){
            flag=(operand.top()=='t');
            flag=!flag;
            operand.pop();
            operand.pop();
        }
        if(flag){
            operand.push('t');
        }
        else{
            operand.push('f');
        }
    }
public:
    bool parseBoolExpr(string expression) {
        stack<char>oprt,operand;
        int idx=0;
        while(expression[idx]){
            if(expression[idx]=='|' || expression[idx]=='!' || expression[idx]=='&'){
                oprt.push(expression[idx]);
            }
            else if(expression[idx]=='t'|| expression[idx]=='f'){
                operand.push(expression[idx]);
            }
            else if(expression[idx]=='('){
                operand.push(expression[idx]);
            }
            else if(expression[idx]==')'){
                evaluate(oprt,operand);
            }
            idx++;
        }
        return operand.top()=='t';
    }
};