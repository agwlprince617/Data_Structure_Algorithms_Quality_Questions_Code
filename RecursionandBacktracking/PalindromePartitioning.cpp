#include<bits/stdc++.h>
using namespace std;

 void helper(int ind,string s,vector<vector<string>>&res,vector<string>&path){
        if(ind==s.size()){
            res.push_back(path);
            return;
        }
        
        for(int i=ind;i<s.size();i++){
            if(isPal(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                helper(i+1,s,res,path);
                path.pop_back();
            }
        }
    }
    
    bool isPal(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        vector<vector<string>>res;
        vector<string>path;
        helper(0,s,res,path);
        return res;
    }    

// Time Complexity is O( N * 2^N) where N to store the path in ans  and 2^N for generating subsequence 
// And the Space Complexity is O( N * N )  , where N to store subsequence in path vector and N for recurssion tree.