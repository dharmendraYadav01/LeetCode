class Solution {
public:
    double findarea(vector<int>&a,vector<int>&b,vector<int>&c){
        int x1=a[0];
        int y1=a[1];
        int x2=b[0];
        int y2=b[1];
        int x3=c[0];
        int y3=c[1];
        return abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double tri=0.0;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                for(int k=j+1;k<points.size();k++){
                    double area=findarea(points[i],points[j],points[k]);
                    tri=max(tri,area);
                }
            }
        }
        return tri;
        // int x=INT_MIN;
        // int y=INT_MIN;
        // for(auto it:points){
        //     x=max(x,it[0]);
        //     y=max(y,it[1]);
        // }
        // double area=(x*y)/2;
        // return area;
    }
};