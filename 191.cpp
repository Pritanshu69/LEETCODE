class Solution {
public:
    int hammingWeight(uint32_t n) {
      int count = 0;
      while(n!=0){
          if(n&1){
              count++;
          }
         n = n>>1;
      }  
      return count;
    }
};

//it's problem number 191 by mistake 18 written there