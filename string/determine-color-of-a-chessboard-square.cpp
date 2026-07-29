class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (('a'-coordinates[0])+('1'-coordinates[1]))%2==0?false:true;
    }
};