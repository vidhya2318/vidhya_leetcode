class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0;
       int v = nums.size();
       for(int i = 0;i < v -1;i++)
        { 
         for(int j = i + 1;j < v;j++)
         {
            if(nums[i] == nums[j] && ((long long) i *j) % k == 0)
            count++;
         }
        }
        return count; 
    }
};