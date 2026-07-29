class NumArray {
public:
    vector<int>result;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int n=nums.size();
            result.resize(n+1,0);
            result[i]=nums[i];
        }
    }
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++){
            sum+=result[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */