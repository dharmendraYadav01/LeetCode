class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area=0;
        while(i<j){
            int hell=min(height[i],height[j]);
            int sum=(j-i)*hell;
            area=max(area,sum);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};