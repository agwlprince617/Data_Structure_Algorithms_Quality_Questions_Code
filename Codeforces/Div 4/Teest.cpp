#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        map<int,char> mpp;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        string s; cin>>s;
        bool ok=false;
        for(int i=0;i<n;i++){
                if(mpp.find(arr[i])!=mpp.end()){
                    if(mpp[arr[i]]!=s[i]){
                        ok=1;
                        break;
                    }
                }
                else{
                    mpp[arr[i]]=s[i];
                }
        }
        if(ok) cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 
        
    }
}