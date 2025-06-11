class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.size() != t.size())
       return false;
       int count[26] = {0};
       int n = s.size();
       for( int i = 0; i < n;i++){
        ++count[s[i]-97];
        --count[t[i]-97];
       }   
       for(int i = 0;i < 26;i++){
       if(count[i] != 0)
         return false;
       }
       return true;
    }
};