class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       int k = nums.size();
       sort(nums.begin(),nums.end());
       for(int i = 0;i < k;i++)
       {
        if(nums[i] == original)
        original = 2 * original;

       } 
       return original;
    }
};