class Solution {
public:
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
        // 1. closest point
        int a=x1;
        int b=(y1+y2)/2;
        int c=(x1+x2)/2;
        int d=y2;
        int e=x2;
        int f=(y1+y2)/2;
        int g=(x1+x2)/2;
        int h=y1;
        int d1=sqrt((x1-xc)*(x1-xc)+(y2-yc)*(y2-yc));
        int d2=sqrt((x2-xc)*(x2-xc)+(y2-yc)*(y2-yc));
        int d3=sqrt((x2-xc)*(x2-xc)+(y1-yc)*(y1-yc));
        int d4=sqrt((x1-xc)*(x1-xc)+(y1-yc)*(y1-yc));
        int d5=sqrt((a-xc)*(a-xc)+(b-yc)*(b-yc));
        int d6=sqrt((c-xc)*(c-xc)+(d-yc)*(d-yc));
        int d7=sqrt((e-xc)*(e-xc)+(f-yc)*(f-yc));
        int d8=sqrt((g-xc)*(g-xc)+(h-yc)*(h-yc));
        if(d1<=r || d2<=r || d3<=r || d4<=r|| d5<=r || d6<=r || d7<=r || d8<=r){
            return true;
        }
        return false;
    }
};

// (1)/2+(-1+1)/

//  x1,y2             x2,y2


//  x1,y1             x2,y1