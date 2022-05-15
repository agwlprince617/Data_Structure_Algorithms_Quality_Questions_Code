class Solution {
public:
    int fib(int n) {
        //TC is O(2*n) SC O(n)
        // if(n==1) return 1;
        // if(n==0) return 0;
        // return fib(n-1)+fib(n-2);

        //TC is O(n) SC O(n)
        // if(n<2) return n;
        // int dp[n+1];
        // dp[0]=0;
        // dp[1]=1;
        // for(int i=2;i<=n;i++){
        //     dp[i]=dp[i-1]+dp[i-2];
        // }
        // return dp[n];

        //TC is O(n) SC O(1)
        // if(n<2) return n;
        // int a=0,c=0,b=1;
        // for(int i=1;i<n;i++){
        //     c=a+b;
        //     a=b;
        //     b=c;
            
        // }
        // return c;

        //TC is O(1) SC O(1)
        //  double phi = (sqrt(5) + 1) / 2;     
        // return round(pow(phi, n) / sqrt(5));

       

    }
};