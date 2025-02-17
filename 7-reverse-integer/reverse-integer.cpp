class Solution {
public:
    int reverse(int x) {
      long ans=0,rem;
      while (x!=0){
        rem =x%10;
        x=x/10;
        ans=rem+ans*10;
      }
      if(ans < INT_MIN || ans > INT_MAX) return 0;
     
      return ans;
    }
};