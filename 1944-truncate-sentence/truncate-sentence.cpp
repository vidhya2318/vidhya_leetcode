class Solution {
public:
    string truncateSentence(string s, int k) {
        int i;
        int n = s.size();
        for(i = 0;i < n;i++)
            if(s[i] == ' ' && --k == 0)
            return s.substr(0,i);
      return s; 
    }
};