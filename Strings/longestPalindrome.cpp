#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int start=0,end=0;
        int max_len=1;
        if(S.size()<2) return S;
        int n=S.size();
        
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 and r<n){
                if(S[l]==S[r]){
                    l--; r++;
                }
                else break;
            }
            int len=r-l-1;
            if(len>max_len){
                max_len=len;
                 start=l+1;
            end=r-1;
            }
           
        }
         for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(l>=0 and r<n){
                if(S[l]==S[r]){
                    l--; r++;
                }
                else break;
            }
            int len=r-l-1;
            if(len>max_len){
                max_len=len;
                 start=l+1;
            end=r-1;
            }
        }
        return S.substr(start,max_len);
    }
};