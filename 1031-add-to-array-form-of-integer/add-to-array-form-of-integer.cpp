class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        vector<int>v;
        for(int i=nums.size()-1;i>=0;i--)
        {
            k+=nums[i];
            v.push_back(k%10);
            k=k/10;
        }
        while(k>0)
        {
            v.push_back(k%10);
            k=k/10;
        }reverse(v.begin(),v.end());
        return v;
    }
};