class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int i=0;
        int j=0;
        int count=0;
        sort(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
        while(i<players.size() && j<trainers.size()){
            if(players[i]<=trainers[j]){
                count++;
                i++;
                j++;
            }
            else if(players[i]>trainers[j]){
                j++;
            }
        }
        return count;
    }
};