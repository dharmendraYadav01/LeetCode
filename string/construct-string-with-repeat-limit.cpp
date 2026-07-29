class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>fre(26,0);
        for(char c:s){
            fre[c-'a']++;
        }
        // priority_queue<char>pq;
        // for(char c:s){
        //     pq.push(c);
        // }
        string result;
        int i=25;
        while(i>=0){
            if(fre[i]==0){
                i--;
                continue;
            }
            char ch='a'+i;
            int freq=min(fre[i],repeatLimit);
            result.append(freq,ch);
            fre[i]-=freq;
            if(fre[i]>0){
                int j=i-1;
                while(j>=0 && fre[j]==0){
                    j--;
                }
                if(j<0){
                    break;
                }
                result.push_back('a'+j);
                fre[j]--;
            }
        }
        return result;
    }
};