class Solution {
public:
    int trailingZeroes(int n) {
        int count =0;
        int rem;
        while(n>=5){
            
                rem =n/5;
              n=n/5;
                count +=rem;
            
        }
        return count;
    }
};