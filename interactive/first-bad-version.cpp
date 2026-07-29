// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=0;
        int last=n;
        int count=0;
        while(start<=last){
            int mid=start+(last-start)/2;
            if(isBadVersion(mid)){
                count=mid;
                last=mid-1;
            }
            else start=mid+1;
        }
        return count;
    }
};