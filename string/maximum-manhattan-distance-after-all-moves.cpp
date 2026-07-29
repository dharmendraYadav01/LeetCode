class Solution {
public:
    int maxDistance(string moves) {
        pair<int,int>p={0,0};
        int k=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L'){
                p.first--;
            }
            else if(moves[i]=='R'){
                p.first++;
            }
            else if(moves[i]=='U'){
                p.second++;
            }
            else if(moves[i]=='D'){
                p.second--;
            }
            else if(moves[i]=='_'){
                k++;
            }
        }
        return abs(p.first)+abs(p.second)+k;
    }
};