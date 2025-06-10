class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int voter = nums[0];
     int vc = 1;
     int n = nums.size();
     for(int i = 0; i < n;i++){
        if(voter == nums[i])
        ++vc;
        else
        --vc;
        if(vc == 0){
            voter = nums[i];
            vc = 1;
        }
     }   
     return voter;
    }
};