class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        bool mishra;
        if(((('a'-coordinate1[0])+('1'-coordinate1[1]))%2==0) && ((('a'-coordinate2[0])+('1'-coordinate2[1]))%2==0)){
            mishra=true;
        }else if(((('a'-coordinate1[0])+('1'-coordinate1[1]))%2!=0) && ((('a'-coordinate2[0])+('1'-coordinate2[1]))%2!=0)){
            mishra=true;
        }
        else mishra=false;
        return mishra;
    }
};