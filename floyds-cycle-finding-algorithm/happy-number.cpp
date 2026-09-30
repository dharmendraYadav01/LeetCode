class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>visited;
        while(n!=1){
            if(visited.find(n)!=visited.end()){
                return false;
            }
            visited.insert(n);
            int next=0;
            while(n>0){
                int digit=n%10;
                next+=digit*digit;
                n/=10;
            }
            n=next;
        }
        return true;
    }
};