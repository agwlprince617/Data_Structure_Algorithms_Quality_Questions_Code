#include<bits/stdc++.h>
using namespace std;

bool solve(string s1,string s2){
    unordered_map<char,int> mpp;
    for(int i=0;i<s1.size();i++){
        mpp[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        if(mpp.find(s2[i])!=mpp.end()){
            mpp[s2[i]]-=1;
        }
        else{
            return false;
        }
    }
    for(auto it:mpp){
        if(it.second!=0) return false;
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool ans=solve(s1,s2);
    if(ans)  cout<<"true";
    else  cout<<"false";
}