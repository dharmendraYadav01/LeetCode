class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // for glass
        int glass=0;
        int last=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].length();j++){
                if(garbage[i][j]=='G'){
                    last=i;
                    glass++;
                }
            }
        }
        for(int i=0;i<last;i++){
            glass+=travel[i];
        }
        // for paper
        int paper=0;
        last=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].length();j++){
                if(garbage[i][j]=='P'){
                    last=i;
                    paper++;
                }
            }
        }
        for(int i=0;i<last;i++){
            paper+=travel[i];
        }
        // for Metal
        int Metal=0;
        last=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].length();j++){
                if(garbage[i][j]=='M'){
                    last=i;
                    Metal++;
                }
            }
        }
        for(int i=0;i<last;i++){
            Metal+=travel[i];
        }
        return paper+Metal+glass;
    }
};