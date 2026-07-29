class Solution {
public:
    // T.C n2
    // int left(vector<int>&height,int i){
    //     int max_l=INT_MIN;
    //     for(int j=0;j<=i;j++){
    //         if(height[j]>max_l){
    //             max_l=height[j];
    //         }
    //     }
    //     return max_l;
    // }
    // int right(vector<int>&height,int i){
    //     int max_r=INT_MIN;
    //     for(int j=i;j<height.size();j++){
    //         if(height[j]>max_r){
    //             max_r=height[j];
    //         }
    //     }
    //     return max_r;
    // }
    int trap(vector<int>& height) {
        int count=0;
        int n=height.size();
        vector<int>left_max(n),right_max(n);
        left_max[0]=height[0];
        for(int i=1;i<n;i++){
            left_max[i]=max(left_max[i-1],height[i]); // storing the left_max value in vector for that index
        }
        right_max[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right_max[i]=max(right_max[i+1],height[i]); // storing the right_max value in vector for that index
        }
        for(int i=1;i<n-1;i++){
            count+=min(left_max[i],right_max[i])-height[i];
        }
        return count;
    }
};