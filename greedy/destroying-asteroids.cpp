class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n=asteroids.size();
        long sum=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++){
            if(sum>=asteroids[i]){
                sum+=asteroids[i];
            }else return false;
        }
        return true;
    }
};