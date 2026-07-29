class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_set<char>jewelset(jewels.begin(),jewels.end());
        for(int i=0;stones[i];i++){
            if(jewelset.count(stones[i])){
            count++;
            }
        }
        return count;
    }
};