class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>res;
        string i=" " ; 
        for(auto j:words){
            string a = j;
            sort(a.begin() , a.end());
            if( a != i){
                res.push_back(j);
            }
            i = a;
        }       
        return res;
    }
};