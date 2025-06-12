class Solution {
public:
    int firstUniqChar(string s) {
      unordered_map<char,int>uniq;
        for (int i = 0; i < s.length(); i++) {
            uniq[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (uniq[s[i]] == 1) 
                return i;
        }
        return -1;
    }
};