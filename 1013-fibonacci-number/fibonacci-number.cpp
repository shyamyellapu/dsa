class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int fibo=0;
        fibo +=fib(n-1);
        fibo+=fib(n-2);
        return fibo;
    }
};