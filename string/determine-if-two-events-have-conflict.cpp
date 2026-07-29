class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        if((event1[1]>=event2[0] && event1[0]<=event2[0])||(event1[0]>=event2[0] && event1[0]<=event2[1])) return true;
        return false;
    }
};


// (t11>=t2 && t11<=t22) || (t22>=t1 && t22<=t11);