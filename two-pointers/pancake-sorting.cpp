class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        vector<int> flip;
        for (int i = n - 1; i != 0; i--) {
            j = i;
            while (j > 0 && arr[j] != i + 1) {
                j--;
            }
            if (j > 0) {
                flip.push_back(j + 1);
                reverse(arr.begin(), arr.begin() + j + 1);
            }
            flip.push_back(i + 1);
            reverse(arr.begin(), arr.begin() + i + 1);
        }
        return flip;
    }
};