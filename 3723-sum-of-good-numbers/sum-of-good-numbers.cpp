class Solution {
public:
    int sumOfGoodNumbers(std::vector<int>& nums, int k) {
        int ans = 0; 
        int n = nums.size();  
        for (int i = 0; i < n; i++) {
            bool flag = true;  
            if(i - k >= 0){ 
                if(nums[i] <= nums[i - k]) flag = false;  
            }
            if(i + k < n){ 
                if(nums[i] <= nums[i + k]) flag = false; 
            }
            if(flag) ans += nums[i]; 
        }
        return ans; 
    }
};