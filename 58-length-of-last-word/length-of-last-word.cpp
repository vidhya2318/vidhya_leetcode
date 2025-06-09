class Solution {
public:
    int lengthOfLastWord(string s) {
       int count= 0;
       int r = s.size()-1;
       while( r >= 0 && s[r] == ' '){
         r--;
       }
       while( r >= 0 && s[r] != ' '){
         count ++;
         r--;
       }
       return count;
    }
};