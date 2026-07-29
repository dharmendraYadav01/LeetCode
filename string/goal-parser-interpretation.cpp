class Solution {
public:
    string interpret(string command) {
        string res="";
        int size=command.size();
        for(int i=0;i<command.length()-1;i++){
            if(command[i]=='G'){
                res+="G";
            }
            else if(command[i]=='(' && command[i+1]==')'){
                res+="o";
            }else if(command[i]=='(' && command[i+1]=='a'){
                res+="al";
            }
        }
        if(command[size-1]=='G'){
            res+="G";
        }
        return res;
    }

};