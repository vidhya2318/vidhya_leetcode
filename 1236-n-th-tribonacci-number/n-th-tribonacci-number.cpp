class Solution {
public:
    int tribonacci(int n) {
      int count = 2;
      int  t0 = 0,t1= 0, t2 = 1,t3; 
      if(n <= 1) return n;
      while(count <= n){
        t3 =  t0 +t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = t3;
        count++;
      }
      return t3;
    }
};