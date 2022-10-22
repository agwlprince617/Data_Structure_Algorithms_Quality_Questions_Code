#include<bits/stdc++.h>
using namespace std;

// Recursive Approach

// int fib(int n){
//     if(n<=1) return n;
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     int n; cin>>n;
//     cout<<fib(n);
// }


//Dp Approach Memoization Top Down
//Time Complexity is O(n) Space O(n)+O(n)

// int fib(int n,vector<int> &dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=fib(n-1,dp)+fib(n-2,dp);
// }

// int main(){
//     int n; cin>>n;
//     vector<int> dp(n+1,-1);
//     cout<<fib(n,dp);
// }


//Tabulation Approach Bottom Up Approach
//Time Complexity is O(n) Space O(n)

// int main(){
//     int n; cin>>n;
//     vector<int> dp(n+1,-1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//      cout<<dp[n];
// }

//Optimal Approach
//Time Complexity is O(n) Space O(1)
int main(){
    int n;
    cin>>n;
    int prev=1;
    int prev2=0;
    for(int i=2;i<=n;i++){
        int curi=prev+prev2;  
        prev2=prev;
        prev=curi;
    }
    cout<<prev;
}