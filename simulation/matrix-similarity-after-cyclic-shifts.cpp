class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
    // approach 1 brute force
        // vector<vector<int>> cpy = mat;
        // int n = mat.size();
        // int m = mat[0].size();
        // while (k > 0) {
        //     for (int i = 0; i < n; i++) {
        //         if (i % 2 == 0) {
        //             rotate(cpy[i].begin(), cpy[i].begin() + 1, cpy[i].end());
        //         } else if (i % 2 != 0) {
        //             rotate(cpy[i].begin(), cpy[i].end() - 1, cpy[i].end());
        //         }
        //     }
        //     k--;
        // }
        // return mat == cpy;
    // approach 2 optimal
        vector<vector<int>> cpy = mat;
        int n = mat.size();
        int m = mat[0].size();
        for (int i = 0; i < n; i++) {
            int sft = k % m; // this give same row so their is no unnecessary rotation.
            if (i % 2 == 0) {
                rotate(cpy[i].begin(), cpy[i].begin() + sft, cpy[i].end());
            } else if (i % 2 != 0) {
                rotate(cpy[i].begin(), cpy[i].end() - sft, cpy[i].end());
            }
        }
        return mat == cpy;
    }
};