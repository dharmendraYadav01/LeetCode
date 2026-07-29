class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        string res = s;
        vector<int> diff(n + 1, 0);
        for (vector<int> it : shifts) {
            int start = it[0];
            int end = it[1];
            int dirn = it[2];
            if (dirn == 1) {
                diff[start]++;
                diff[end + 1]--;
            } else {
                diff[start]--;
                diff[end + 1]++;
            }
        }
        int shift = 0;
        for (int i = 0; i < n; i++) {
            shift = (shift + diff[i]) % 26;
            if (shift < 0) {
                shift += 26;
            }
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }
        // for(int i=it[0];i<=it[1];i++){
        //     if(it[2]==1){ // if it[2]==1 then foreward
        //         char ch=res[i];
        //         if(ch>='a' && ch<='z'){
        //             res[i]=(ch=='z')?'a':ch+1;
        //         }
        //     }
        //     else{
        //         char ch=res[i]; // if it[2]==0 then backward
        //         if(ch>='a' && ch<='z'){
        //             res[i]=(ch=='a')?'z':ch-1;
        //         }
        //     }
        // }

        return s;
    }
};