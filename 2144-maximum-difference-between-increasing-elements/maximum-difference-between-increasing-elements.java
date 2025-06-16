class Solution {
    public int maximumDifference(int[] nums) {
        int mn = nums[0], res = -1;
        for (int i = 1; i < nums.length; ++i) {
            res = Math.max(res, nums[i] - mn);
            mn = Math.min(mn, nums[i]);
        }
        return res == 0 ? -1 : res;
    }
}
