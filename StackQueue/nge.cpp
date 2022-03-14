
#include <bits/stdc++.h> 
using namespace std; 

 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans;
        stack<long long> s;
        s.push(arr[n-1]);
        ans.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(!s.empty() and s.top()<=arr[i]) s.pop();
            
            if(s.empty()) ans.push_back(-1);
            else ans.push_back(s.top());
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }