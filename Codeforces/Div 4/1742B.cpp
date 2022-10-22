#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        int f=1;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
            int c=arr[i]-arr[i-1];
            if(c>0) continue;
            else{
                cout<<"NO"<<"\n";
                f=0;
                break;
            } 
        }
        if(f) cout<<"YES"<<"\n";
        
    }
}