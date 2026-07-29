class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& it : image) {
            reverse(it.begin(), it.end());
        }
        for (auto& it : image) {
            for (int i = 0; i < it.size(); i++) {
                if (it[i] == 1)
                    it[i] = 0;
                else
                    it[i] = 1;
            }
        }
        return image;
    }
};