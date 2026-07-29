class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start="";
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                start+=to_string(board[i][j]);
            }
        }

        string target="123450";
        queue<string>result;
        result.push(start);
        unordered_map<int,vector<int>>mp;
        mp[0]={1,3};
        mp[1]={0,2,4};
        mp[2]={1,5};
        mp[3]={0,4};
        mp[4]={1,3,5};
        mp[5]={2,4};

        unordered_set<string>visited; //agar hamne ek swap kar diya then do not return
        visited.insert(start);

        int level=0;
        while(!result.empty()){
            int n=result.size();
            while(n--){
                string curr=result.front();
                result.pop();

                if(curr==target){
                    return level;
                }
                int indexofzero=curr.find('0');
                for(int swapidx:mp[indexofzero]){
                    string newstate=curr;
                    swap(newstate[indexofzero],newstate[swapidx]);
                    if(visited.find(newstate)==visited.end()){
                        result.push(newstate);
                        visited.insert(newstate);
                    }
                }
            }
            level++;
        }
        return -1;
    }
};