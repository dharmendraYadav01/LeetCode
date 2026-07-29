class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x=0;
        // num+2*t because num can move t and x can also move t i.e 2t.
        for(int i=1;i<=(num+(2*t));i++){
            if((num+t)==abs(i-t)){
                x=i;
            }
        }
        return x;
    }
};