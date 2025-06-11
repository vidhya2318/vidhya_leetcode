class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int index = (nums[i] - 1) % n;
            if (nums[index] <= INT_MAX - n)  // overflow protection
                nums[index] += n;
        }

        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] <= n) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};
