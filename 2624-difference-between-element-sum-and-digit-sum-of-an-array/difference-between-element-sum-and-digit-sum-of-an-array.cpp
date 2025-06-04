class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum = 0, dsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            esum += nums[i];
            while (nums[i] > 0) {
                dsum += nums[i] % 10;
                nums[i] /= 10;
            }
        }
        return abs(dsum - esum);
    }
};