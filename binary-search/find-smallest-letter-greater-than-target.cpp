class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int start=0;
        int last=n-1;
        while(start<=last){
            int mid=start+(last-start)/2;
            if(letters[mid]>target){
                last=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return letters[start%n];   
    }
};