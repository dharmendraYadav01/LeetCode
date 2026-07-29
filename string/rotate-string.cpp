class Solution {
public:
    bool rotateString(string s, string goal) {
        // Approach 1
        // int n = s.length();
        // while (n > 0) {
        //     rotate(s.begin(), s.begin() + 1, s.end());
        //     if (s == goal)
        //         return true;
        //     n--;
        // }
        // return 0;
        
        // Approach 2
        if (s.length() != goal.length())
            return false;
        string dou = s + s;
        return dou.find(goal) != string::npos;
    }
};