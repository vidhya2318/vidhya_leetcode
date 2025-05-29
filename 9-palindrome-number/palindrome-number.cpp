class Solution {
public:
    bool isPalindrome(int x) {
       long int rev = 0,digit, original = x;
      if(x < 0) return 0;
      while(x != 0){
        digit = x % 10;
         rev = rev * 10 + digit;
         x = x / 10;
      } 
      return rev == original;   
    }
};