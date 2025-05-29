class Solution {
public:
    bool isThree(int n) {
      if(n <= 1) 
         return false;
      int k = sqrt(n);
      if (k * k != n) 
         return false;
      for(int i = 2;i * i <= k;i++){
        if(k % i == 0)
        return false;
      }  
      return true;
    }
};