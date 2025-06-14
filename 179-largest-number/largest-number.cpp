#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    static bool compare(int a, int b) {
        string str1 = to_string(a) + to_string(b);
        string str2 = to_string(b) + to_string(a);
        return str1 > str2;  
    }

    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);
        if (nums[0] == 0) return "0";

        string result = "";
        for (int num : nums) {
            result += to_string(num);
        }
        return result;
    }
};
