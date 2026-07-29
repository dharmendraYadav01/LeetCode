class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int front=0;
        int total=0;
        for(int i=0;i<k;i++){
           total+=cardPoints[i];
        }
        front=total;
        for(int i=1;i<=k;i++){
            total-=cardPoints[k-i]; // front me se value substract karo
            total+=cardPoints[n-i]; // last me add kro 
            front=max(total,front);
        }
        return front;
    }
};